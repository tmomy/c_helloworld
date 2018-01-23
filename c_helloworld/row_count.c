#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, nl,tab, span, isspace(int b);
	nl = 0;
	tab = 0;
	span = 0;
	while ((c = getchar()) != EOF)
		{	
			if (c == '\n')
				++ nl;
			if (c == '\t')
				++ tab;

			if (isspace(c) != 0)
				++ span;
		}
	printf("nl:%3d, tab:%3d, span: %3d", nl, tab, span);
	return 0;
}