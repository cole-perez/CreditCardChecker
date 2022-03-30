#include <stdio.h>
#include <cs50.h>


void legit_check(long c);

int main (void)
{
    
    long number = get_long("Number: ");
    legit_check(number);
}














void legit_check(long c)
{
    int total=0, count=0, length=0,firstnum,secondnum;
    long number =c;

    for (long i=c; i>=1;)
    {
        i= i*.1;
        length=length+1;
    }
    for (long i=c;i>=1;)
    {
        
        if (count%2!=0)
        {
            if (number%10*2 >=10)
            {
                
                
                long newnum = number%10*2;
                total=total + newnum%10;
                
                
                newnum=newnum*.1;
                total=total + newnum%10;
                
                
            }
            else {
                
                total=total+number%10*2;
            }
        }
        else 
        {
            total=total+number%10;
        }
        if (number>0 && number<10)
        {
        
            firstnum=number;
        }
        if (number>10 && number<100)
        {
        
            secondnum=number%10;
        }
            
        number=number*.1;
        i =i*.1;    
        
        count=count+1;
        
        
    }

    
    if (total%10 == 0)
    {
        //AMEX CHECK
        if (length==15 && firstnum==3 && (secondnum==4 || secondnum ==7))
        {
            printf("AMEX\n");
        }
        
        //VISA CHECK
        else if ((length==16 || length == 13) && firstnum==4 )
        {
            printf("VISA\n");
        }
        //MASTERCARD CHECK
        else if (length ==16 && firstnum == 5 && (secondnum >0 && secondnum<=5))
        {
            printf("MASTERCARD\n");
        }
        else{
            printf("INVALID\n");
        }
        
    }
    else 
    {
        printf("INVALID\n");
    }

}