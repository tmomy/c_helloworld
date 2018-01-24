#include <stdio.h>

int main(int argc, char const *argv[])
{
	double nc;
	for (nc = 0; getchar()!=EOF; ++nc)
		putchar	;
	printf("%.0f\n", nc);
	return 0;
} 
