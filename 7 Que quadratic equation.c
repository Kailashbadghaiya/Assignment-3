#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,discriminant ;
    float x,y ;

    printf("Enter a coefficient of x^2,x and constant term\n");
    scanf("%d%d%d",&a,&b,&c);

    discriminant=b*b-4*a*c ;

    if(discriminant<0)
    {
        printf("Both roots are imaginary\n");
    }
    if(discriminant==0)
    {
        printf("Both roots are equal\n");
        x=-b/(2.0*a);
        printf("Root is %f",x);
    }
    if(discriminant>0)
    {
        printf("Roots are real are distinct");
        x=(-b+sqrt(discriminant))/(2*a);
        y=(-b-sqrt(discriminant))/(2*a);
        printf("\n Roots are : %f,%f",x,y);
    }
    return 0;
}
