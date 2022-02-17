#include<stdio.h>
int main()
{
    long long int i,number,sum=0;
    scanf("%lld",&number);
    for(i=1;i<=number;i++) sum+=i;
    printf("%lld\n",sum);
    return 0;
}