#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c  ;

    printf("Enter 3 number\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b) && (a>c))
    {
        printf("number a=%d greatest\n");
    }
    else if((b>c) && (b>a))
    {
        printf("number b=%d greatest\n");
    }
    else if((a==b) || (b==c) || (c==a))
    {
        printf("greatest number is equal\n");
    }
    else
    {
        printf("number c=%d greatest\n");
    }
    return 0;
}
