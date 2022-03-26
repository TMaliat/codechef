#include<stdio.h>
int main()
{
    int IQ_X;
    scanf("%d",&IQ_X);
    if(IQ_X>=100 && IQ_X<=169)
    {
        int iq=IQ_X + 7;
        if(iq > 170) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
