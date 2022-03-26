#include<stdio.h>
int main()
{
    int t1,t2,t3,topic;
    scanf("%d %d %d %d",&t1,&t2,&t3,&topic);
    if(topic==t1 || topic==t2 || topic==t3) printf("Yes\n");
    else printf("No\n");
    return 0;
}