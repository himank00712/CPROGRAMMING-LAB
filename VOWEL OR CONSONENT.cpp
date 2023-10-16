#include <stdio.h>

void main()
{
	char x;
	printf("enter any alphabet:\n");
	scanf("%c", &x);
	if (x=="a"||x=="e"||x=="i"||x=="o"||x=="u"|| x == "A" || x == "O" || x == "I" || x == "E" || x == "U")
	{
		printf("it is an vowel");
	}
	else
	{
		printf("it is a consonent");
	}
}
