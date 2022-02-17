#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,sum=0;
    scanf("%d %d %d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if(sum==180 && ang1!=0 && ang2!=0 && ang3!=0) printf("YES\n");
    else printf("NO\n");
    return 0;
}