#include <stdio.h>

int main(int argc, char const *argv[])
{
	float celsius;
	int lower, upper, step;
	lower = 0.0;
	upper = 300;
	step = 20;
	for (celsius=lower; celsius <= upper; celsius = celsius + step)
		printf("%6.1f \t%3.1f\n", celsius, celsius*(9.0/5.0) + 32.0);
	return 0;
}