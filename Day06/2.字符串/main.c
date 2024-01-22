#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void)
{
	//printf("I love xixi!\n");
	//printf("I love xixi!"
	//	"  --From MORS\n");

	//char name[] = "Allen";
	//printf("%s", name);

	//char name1[] = "Allen";
	//char* name2 = "Allen";
	//name1[0] = 'a';
	//name2[0] = 'a';

	//char name[] = "Beyonce";
	//printf("%s\n", name);
	//puts(name);

	//char name[N];
	//scanf("%s", name);
	//gets_s(name, N);

	//printf("strlen(\"abc\") = %d\n", strlen("abc"));
	//printf("strlen(\"\") = %d\n", strlen(""));

	char s1[10];
	strncpy(s1, "Hello", 4);
	strncpy(s1, "Hello", 6);
	strncpy(s1, "Hello", 8);

	return 0;
}
