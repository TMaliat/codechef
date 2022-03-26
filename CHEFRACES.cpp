#include<stdio.h>
int main()
{
    int test;
    int x,y,a,b,count;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        count=0;
        scanf("%d %d %d %d",&x,&y,&a,&b);
        if(x!=y && a!=b){
            if(x==a) count++;
            if(x==b) count++;
            if(y==a) count++;
            if(y==b) count++;
            printf("%d\n",2-count);
        }
    }
}