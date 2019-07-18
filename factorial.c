#include<stdio.h>
int main()
{
    int sum=0,n,i,fact=1;
    printf("\n FACTORIAL OF A NUMBER \N");
    printf("\n Enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    sum=sum+fact;
    printf("FACTORIAL of %d:%d",n,sum);
}
