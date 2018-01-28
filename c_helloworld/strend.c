#include <stdio.h>

int strend(char *s, char *t);

int main(int argc, char const *argv[])
{
	int r, r2;
	char s[] = "now, is the time";
	char t[] = "time";
	char t1[] = "name";
	r = strend(s, t);
	printf("%d\n", r);
	r2 = strend(s, t1);
	printf("%d\n", r2);

	return 0;
}

int strend(char *s, char *t) {
	int i, j;
	i = j = 0;
	while (*s++){
		i++;
		// s++;
	}
	while(*t++){
		j++;
		// t++;	
	}
	printf("%d\n",i );
	printf("%d\n",j );
	if(j<=i) {
		while((*s-- == *t-- )&& j>=0){
			printf("%s\n", s);
			printf("%s\n", t);
			j--;
		}
		printf("%d\n", j);
		return (j>0)? 0:1;
	}
	else
		return 0;

}
