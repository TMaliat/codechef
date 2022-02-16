#include<stdio.h>
int main()
{
    int size,array[10000],i;
    scanf("%d",&size);
    for(int i=0;i<size;i++) scanf("%d",&array[i]);
        //reversing the array
    for(int i=size-1;i>=0;i--) printf("%d ",array[i]);
    return 0;
}