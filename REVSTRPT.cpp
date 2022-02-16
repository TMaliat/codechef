#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
        {
            for(int j=i;j<size;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }    

            printf("\n");
        }
        return 0;
}