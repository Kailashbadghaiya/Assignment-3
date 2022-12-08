#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b ;

    printf("Enter a number 1: \n");
    scanf("%d",&a);

    printf("Enter a number 2: \n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("number 1 is greater\n");
    }
    else if(a==b)
    {
        printf("both number are same\n");
    }
    else
    {
        printf("number 2 is greater\n");
    }
    return 0;
}
