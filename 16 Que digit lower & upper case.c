#include<stdio.h>
#include<conio.h>
int main()
{
    char check ;

    printf("Enter a number\n");
    scanf("%c",&check);

    if((check>='65') && (check<='90'))
    {
        printf("Upper\n");
    }
    else if((check>=48) && (check<=57))
    {
        printf("Lower\n");
        printf("number\n");
    }
    else
        printf("symbol");
    return 0;
}
