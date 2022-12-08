#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if((num%3==0) || (num%7==0))
    {
        printf("number 3 or 7 divisible\n");
        scanf("%d",&num);
    }
    else
    {
        printf("number 3 or 7 not divisible\n");
    }
    return 0;
}
