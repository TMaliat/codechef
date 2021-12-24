#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int withdraw;
    float balance;
    scanf("%d %f",&withdraw,&balance);
    if((withdraw%5==0)&&(withdraw+0.5<=balance))
            printf("%0.2f\n",balance-withdraw-0.5);
        else 
           printf("%0.2f\n",balance);
    return 0;
}