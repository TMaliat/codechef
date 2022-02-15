#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number%5==0 && number%11==0) printf("BOTH\n");
    else if(number%5==0 || number%11==0) printf("ONE\n");
    else printf("NONE\n");
    return 0;
}