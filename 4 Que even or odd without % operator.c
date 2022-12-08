#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if(num&1==1)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }
    return 0;
}
