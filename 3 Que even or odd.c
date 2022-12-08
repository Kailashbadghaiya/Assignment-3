#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
    return 0;
}
