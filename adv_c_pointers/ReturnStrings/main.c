#define _CRT_SECURE_NO_WARNINGS
// For compatibility across compilers, I use the 'outdated'
// strcat() function here. The MS Compiler complains so I've
// defined _CRT_SECURE_NO_WARNINGS to disable warnings

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAXSTRLEN 100

char *string_function(char *astring) {
	char *s;
	s = (char*)malloc(MAXSTRLEN);
	s[0] = 0;		                // need this to initialize the buffer created by malloc
	strcat(s, "Hello ");
	strcat(s, astring);
	strcat(s, "\n");
	return s;
}

int main(int argc, char **argv) {
	printf(string_function("Fred"));
	printf(string_function("Gussie Fink-Nottle"));
	return 0;
}
