#include <stdio.h>
#define MAXLINE 50

void getlines(char s[], int lim);
int htoi(char input[]);


int main(int argc, char const *argv[])
{
	int n;
	char line[MAXLINE];
	getlines(line, MAXLINE);
	n = htoi(line);
	printf("%d\n", n);
	return 0;
}


int htoi(char s[]) {
	int sum, j;
	sum = 0;
	if (s[0]!='0' && (s[1]!='x'||s[1]!='X')) {
		printf("input wrong...\n");
		return 0;
	}
	for (int i = 2; (s[i]>='0'&&s[i]<='9')||(s[i]>='a' && s[i]<='f') ||(s[i]>='A'&& s[i]<='F'); ++i)
	{
		if (s[i]>='0'&&s[i]<='9')
			j = s[i] -'0';
		else if (s[i]>='a' && s[i]<='f')
			j = s[i] - 'a' + 10;
		else 
			j = s[i] - 'A' + 10;
		sum = 16*sum + j;
	}
	return sum;
}


void getlines(char s[], int lim) {
	int i, c;
	for (i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i)
	{
		if (i < lim -2) {
			s[i] = c;
		}
	}
	if (c == '\n')
		s[i] = c;
	s[i] = '\0';
}