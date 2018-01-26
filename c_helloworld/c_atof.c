#include <stdio.h>
#include <ctype.h>

#define MAXLINE 50

double atof( char s[]);
int getlinea(char s[], int MAX);


int main(int argc, char const *argv[])
{
	char s[MAXLINE];
	getlinea(s, MAXLINE);
	printf("%.2f\n",atof(s));

	return 0;
}


int getlinea(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}


double atof(char s[]) {
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i ++;
	for (val = 0.0; isdigit(s[i]); i++)
		/*if s[i] not num, jump out*/
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
		/*if s[i] not num, jump out*/
	{
		val = 10.0 * val + (s[i] - '0');
		power *=10.0; 
	}
	return sign*val/power;
}