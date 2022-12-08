#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if((num>99) && (num<1000))
    {
        printf("number is three digit number\n");
    }
    else
    {
        printf("number is not three digit number\n");
    }
    return 0;
}
