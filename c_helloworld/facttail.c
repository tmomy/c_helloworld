#include <stdio.h>
#include "recursive.h"


int main(int argc, char const *argv[])
{
	int n, a;
	n = 5;
	a = 1;
	printf("%d\n", facttail(n, a));
	return 0;
}

int facttail(int n, int a) {
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return a;
	else
		return facttail(n-1, n*a);
}