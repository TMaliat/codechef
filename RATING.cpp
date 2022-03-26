#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int sum;
        scanf("%d",&sum);
        int mul=(sum+1)*(-1);
        printf("%d\n",mul);
    }
    return 0;
}