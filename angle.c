#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a == b*b + c*c)
    {
        printf("angle A is ninty");
    }
    else
    {
        printf("angle is not ninty");
    }
}
