#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    
    temp=a;
    a=b;
    b=temp;
    printf("value of A:%d",a);
    printf("\n value of B:%d",b);
}
