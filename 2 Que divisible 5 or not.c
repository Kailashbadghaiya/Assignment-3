#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if(num%5==0)
    {
        printf("number is divisible\n");
    }
    else
    {
        printf("number is not divisible\n");
    }
    return 0;
}
