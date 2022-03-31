#include<stdio.h>
int main(){
    int test,unreg,cap,reg;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        scanf("%d %d %d",&unreg,&cap,&reg);
        if(reg+unreg <= cap) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}