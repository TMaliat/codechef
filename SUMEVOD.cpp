#include<stdio.h>
long long int evenSum(long long int start,long long int size)
{
    long long int sum =0,i;
    for(i=1;i<=size;i++)
    {
        sum+=start;
        start+=2;
    }
    return sum;
}
long long int oddSum(long long int start,long long int size)
{
    long long int sum =0,i;
    for(i=1;i<=size;i++)
    {
        sum+=start;
        start+=2;
    }
    return sum;
}
int main()
{
    long long int size,start=1;
    scanf("%lld",&size);
    printf("%lld ",oddSum(start,size));
    printf("%lld \n",evenSum(start+1,size));
    return 0;
}