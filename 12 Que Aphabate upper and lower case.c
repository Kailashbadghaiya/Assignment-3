#include<stdio.h>
#include<conio.h>
int main()
{
    char check ;

    printf("Enter a character\n");
    scanf("%c",&check);

    if((check>='A')  && (check<='Z'))
    {
        printf("upper\n");
    }
    else if((check>='a') && (check<='z'));
    {
        printf("Lower\n");
    }
    return 0;
}
