#include<stdio.h>
#include<conio.h>
int main()
{
    int year ;

    printf("Enter a leap year\n");
    scanf("%d",&year);

    if((year%4==0) && (year%100 !=0) || (year%400==0))
    {
        printf("year is a leap year\n");
    }
    else
    {
        printf("year is a not leap year\n");
    }
    return 0;
}
