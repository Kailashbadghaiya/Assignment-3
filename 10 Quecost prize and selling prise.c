#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,pf,ls,percentage ;

    printf("Enter a cp:");
    scanf("%f",&cp);

    printf("Enter a sp:");
    scanf("%f",&sp);

    pf=sp-cp ;
    ls=cp-sp ;

    if(sp>cp)
    {
        printf("profit rupee : %.2f\n",pf);
        profit("profit percentage : %.2f\n %%",pf*100/cp);
    }
    else if(sp<cp)
    {
        printf("loss rupee : %.2f\n",ls);
        printf("loss percentage : %.2f %%",ls*100/cp);
    }
    return 0;
}
