#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("\n Number %d is a perfect number",n);
    }
    else
    {
        printf("\n Number %d is not a perfect number",n);
    }
}
