/*
* Sorts the strings of an array using bubble sort
* Uses strcmp and strcpy
*
* Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY_SIZE 50
#define MAX_STRING_SIZE 100

int countChars(char str[]);

void main()
{
	char name[MAX_ARRAY_SIZE][MAX_STRING_SIZE];
	char str[MAX_STRING_SIZE];
	int number, i, j, count;

    printf("Input number of strings: \n");
    scanf("%d", &number);

    for (count = 0; count < number; count++) {
    	printf("Input string %d: \n", count+1);
    	scanf("%s", name[count]);
    }

    printf("\nStrings before sort: \n");

   	for (i = 0; i <= number; i++) {
        printf("%s\n", name[i]);
	}
    
    int strSize = countChars(str);
	char temp[MAX_STRING_SIZE];

    for (i = 1; i <= number; i++) {
    	for (j = 0; j <= number-i; j++) {
    		if (strcmp(name[j], name[j+1]) > 0) {
    			strcpy(temp, name[j]);
    			strcpy(name[j], name[j+1]);
    			strcpy(name[j+1], temp);
    		}
    	}
    }

    printf("\nStrings after bubble sort: \n");
    
    for (i = 0; i <= number; i++) {
        printf("%s\n", name[i]);
	}
}

int countChars(char str[]) {
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    return count;
}