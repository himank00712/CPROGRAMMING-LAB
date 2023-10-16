#include <stdio.h>

void main()
{
	int x;
	printf("enter any value:\n");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
}
