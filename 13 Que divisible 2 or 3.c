#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if((num%2==0) && (num%3==0))
    {
        printf("number 2 or 3 divisible\n");
    }
    else
    {
        printf("number 2 or 3 not divisible\n");
    }
    return 0;
}
