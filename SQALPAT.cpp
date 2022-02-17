#include <stdio.h>

int main(void) {
	// your code goes here
	int N, i, j;
	scanf("%d", &N);
	for(i=1;i<=N;i++)
	{
	    if(i%2 == 1)
	    {
	        for(j=1;j<=5;j++)
	            printf("%d ", 5*(i-1)+j);
	    }
	    else
	    {
	        for(j=0;j<5;j++)
	            printf("%d ", 5*i-j);
	    }
	    printf("\n");
	}
	return 0;
}

