#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int term;
        scanf("%d",&term);
        if(term%k==0) count++;
    }
    printf("%d\n",count);
    return 0;
}