#include<stdio.h>
void bubbleSort(int* array,int size)
{
    int temp;
    for(int i=0;i<size-1;i++) //for number of passes
    {
        for(int j=0;j<size-1-i;j++) //for number of comparisons of passes
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main()
{
    int array[3],i;
    for(i=0;i<3;i++) scanf("%d",&array[i]);
    bubbleSort(array,3);
    //printf("%d ",array[1]);
    if((array[0]+array[1])>array[2]) printf("YES\n");
    else printf("NO\n");
    return 0;
}