#include<stdio.h>
int main()
{
    int test,a,b;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
      scanf("%d %d",&a,&b);
      printf("%d\n",a+b);
    }
    return 0;
}