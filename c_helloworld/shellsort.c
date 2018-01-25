#include <stdio.h>
/*希尔排序*/

void shellsorts(int v[], int len);


int main(int argc, char const *argv[])
{
	int len ;
	int v[] = {3,4,7,1,9,3,95,65};
	len = 8;
	shellsorts(v, len);
	for (int i = 0; i < len; ++i)
	{
		printf("%d\n", v[i]);
	}
	return 0;
}

void shellsorts(int v[], int len) {
	int gap, i, j, temp;
	for ( gap = len/2; gap > 0; gap /= 2)
	{	
		for (i = gap; i < len; i ++)
		{
			for (j = i - gap; (j >= 0)&& v[j] > v[j+gap]; j -=gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
