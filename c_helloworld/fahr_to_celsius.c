#include <stdio.h>
/* 当fahr = 0,20, ....,300时，分别打印对应的温度*/

int main(int argc, char const *argv[])
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}