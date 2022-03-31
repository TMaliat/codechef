#include<stdio.h>
int main()
{
    int test,friends,shoes,left,right;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        scanf("%d %d",&friends,&shoes);
        left=right=friends;
        if(shoes<left) printf("%d\n",right+(left-shoes));
        else if(shoes>=left) printf("%d\n",right);
    }
    return 0;
}