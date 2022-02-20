#include<stdio.h>
#include<math.h>
int main()
{
    int size,rem,sum=0,num;
    scanf("%d",&size);
    while(size--)
    {
        scanf("%d",&num);
        while(num!=0){
            rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}