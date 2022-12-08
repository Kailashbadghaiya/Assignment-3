#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,profit,loss,percentage ;

    printf("Enter a cp\n");
    scanf("%f",&cp);

    printf("Enter a sp\n");
    scanf("%f",&sp);

    profit=sp-cp ;
    loss=cp-sp ;

    if(sp>cp)
    {
        printf("profit rupee %.2f\n",profit);
        printf("profit percentage %.2f %%",profit*100/cp);
    }
    else if(sp<cp)
    {
        printf("loss rupee %.2f\n",loss);
        printf("loss percentage %.2f %%",loss*100/cp);
    }
    return 0;
}
