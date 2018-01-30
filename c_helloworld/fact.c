#include <stdio.h>
#include "recursive.h"


int main(int argc, char const *argv[])
{
	int n;
	n = 5;
	printf("%d\n", fact(n));
	return 0;
}


int fact(int n) {
	if (n<0)
		return 0;
	else if (n==0)
		return 1;
	else if (n==1)
		return 1;
	else
		return n * fact(n-1);
}
