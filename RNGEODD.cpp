#include<stdio.h>
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    if(start%2==0) 
    {
        start=start+1;
        for(int i=start;i<=end;i+=2)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=start;i<=end;i+=2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}