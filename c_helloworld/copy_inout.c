#include <stdio.h>
/*
	将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
*/
int main(int argc, char const *argv[])
{
	int c, span, isspace(int b);
	span = 0;
	while ((c = getchar()) != EOF){
		if (isspace(c) != 0) {
			/*判断是否为空格符*/
		  	++span;
		  	if (span == 1)
		  		putchar(c);
		}
		if (isspace(c) == 0){
			 putchar(c);
			span = 0;

		}
	}da
	return 0;
}