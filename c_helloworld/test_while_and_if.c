#include <stdio.h>
/*
test scope of while and if 
*/


int main(int argc, char const *argv[])
{
	char s[100], t[100];
	s[0] = 'a';
	s[1] = 'b';
	s[2] = 'c';
	s[3] = '\0';
	t[0] = 'd';
	t[1] = 'e';
	t[2] = 'f';
	t[3] = '\0';
	if (a<4)
	{
		a++;
		printf("%d\n", a);
	}
	while(*t++){
		printf("%d\n", b);
	}
	printf("%d and %d\n", a, b);
	return 0;
}