/**PALLINDROME NUMBER */

#include<stdio.h>
int main()
{
    int n=5225;
    int sum=0,rem,temp=n;
    
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("\n Number %d is a PALLINDROME",n);
    }
    else
    {
        printf("\n Number %d is not a PALLINDROME",n);
    }
}
