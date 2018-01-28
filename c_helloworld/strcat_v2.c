#include <stdio.h>

void stract2(char *s, char *t);

int main(int argc, char const *argv[])
{
	char s[100], t[100];
	s[0] = 'a';
	s[1] = 'b';
	s[2] = 'c';
	s[3] = '\0';
	t[0] = 'd';
	t[1] = 'e';
	t[2] = 'f';
	t[3] = '\0';
	printf("%s\n", s);
	printf("%s\n", t);
	stract2(s, t);
	printf("%s\n", s);
	return 0;
}


void stract2(char *s, char *t)
{
	while(*s)
		s++;
	while((*s++ = *t++))
		;
}

