#include<stdio.h>
#include<math.h>
int main()
{
    int sum,diff,mul,flr,a,b;
    int test;
    scanf("%d",&test);
   for(int i=1;i<=test;i++){
        scanf("%d %d %d %d",&sum,&diff,&mul,&flr);
        a=(sum+diff)/2;
        b=(sum-a);
        if((a*b)==mul && floor(a/b)==flr) printf("%d %d\n",a,b);
        else printf("-1 -1\n");
   }
    return 0;
}