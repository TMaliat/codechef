#include <stdio.h>

int main(void) {
	// your code goes here
	float a,b,c, s;
	scanf("%f %f %f", &a, &b, &c);
	s = (a+b+c)/2;
//	printf("%f", s);
	if (s*(s-a)*(s-b)*(s-c) > 0)
	{
	    if (a==b && a==c)
	        printf("1");
	    else if(a==b || a==c || b==c)
	        printf("2");
	    else
	        printf("3");
	}
	else
	    printf("-1");
	return 0;
}