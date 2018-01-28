#include <stdio.h>
#define MAXLINE 50

/*
find it that is same of s1 and s2
 */

void squeezes(char s1[], char s2[], char  s3[]);

void squeezes(char s1[], char s2[], char s3[]) {
	int i, j,k;
	i = 0;
	k = 0;
	while (s1[i] != '\0') {
		j = 0;
		while (s2[j] != '\0') {
			if (s1[i] != s2[j]) {
				s3[k] = s1[i];
				++k;
			}

			++j;
		    }
		++i;
	}
	s3[k] = '\0';
}


void getstr(char s[], int lim) {
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


int main(int argc, char const *argv[])
{
	char s1[MAXLINE], s2[MAXLINE], s3[MAXLINE];
	int i;
	
	for( i = 0;(i < 2); ++i) {
		printf("%d\n", i );
		if (i == 0) {
			printf("please enter s1:\n");
			getstr(s1, MAXLINE);
		} 
		if (i == 1) {
			printf("please enter s2:\n");
			getstr(s2, MAXLINE);
		}
	}
	squeezes(s1, s2, s3);
	printf("%s\n", s3);

	return 0;
}