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
    int size,array[10000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    bubbleSort(array,size);
    int max = 20+array[size-1];
    printf("%d\n",max);
    return 0;
}