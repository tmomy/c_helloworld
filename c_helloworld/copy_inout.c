#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, span, isspace(int b);
	span = 0;
	while ((c = getchar()) != EOF){
		if (isspace(c) != 0) {
		  	++span;
		  	if (span == 1)
		  		putchar(c);
		}
		if (isspace(c) == 0){
			 putchar(c);
			span = 0;

		}
	}
	return 0;
}