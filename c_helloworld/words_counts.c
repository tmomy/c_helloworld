#include <stdio.h>
/*以每行一个单词的形式打印其输入*/

#define IN 1
#define OUT 0


int main(int argc, char const *argv[])
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			printf("\n");
			++nw;
		}
		if (state == IN) {
			putchar(c);
		}
	}
	return 0;
}