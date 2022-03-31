#include<stdio.h>
#include<math.h>
int main(){
    int x,y,test,diff;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        scanf("%d %d",&x,&y);
        diff=abs(x-y);
        printf("%d\n",diff);
    }
    return 0;
}