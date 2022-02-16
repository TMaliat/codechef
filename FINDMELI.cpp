#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,i,test,count=0;
    scanf("%d %d",&size,&test);
    int* array=(int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++) scanf("%d",&array[i]);
    for(i=0;i<size;i++)
    {
        if(array[i]==test) count++;
    }
    if(count==0) printf("-1\n");
    else printf("1\n");
    return 0;
}