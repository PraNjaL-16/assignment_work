#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if( (a>b || a>c) && (a<b || a<c) )
       {
        printf("%d",a);
       }
      else if( (b>a || b>c) && (b<a || b<c) )
        {
            printf("%d",b);
        }
      else if( (c>a || c>b) && (c<a || c<b) )
        {
            printf("%d",c);
        }
}
