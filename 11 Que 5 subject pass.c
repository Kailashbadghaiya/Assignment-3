#include<stdio.h>
#include<conio.h>
int main()
{
    float m1,m2,m3,m4,m5,tot,per ;

    printf("Enter a 5 subject number\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    tot=m1+m2+m3+m4+m5 ;

    printf(" Total marks of student =%f\n",tot);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
    {
        printf("student in pass\n");
        per=tot/5.0 ;
        printf("\nPercentage of a student = %.2f",per);
    }
    else
        printf("\nStudents in fail");
    return 0;
}
