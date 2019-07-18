#include<stdio.h>
int main()
{
    int n=1234;
    int sum=0,rem;
    
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        
    }
    printf("Sum of digit:%d",sum);
    
}
