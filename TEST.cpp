#include<stdio.h>
#include<stdbool.h>
int main()
{
    long long int number;
    bool b = true;
    while(b)
    {
        scanf("%lld",&number);
        if(number==42){
            b = false;
        }
        else {
            printf("%lld\n",number);
        }
    }
    return 0;
}