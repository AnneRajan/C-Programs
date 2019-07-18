#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("\n Enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("\n Number %d is a prime number.",n);
    }
    else
    {
        printf("\n Number %d is not a prime number",n);
    }
}
