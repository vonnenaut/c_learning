/*
Write function that counts
number of chars in a string (length)
  - can't use strlen library function
  - function should take char array as param
  - returns an int (length of string)
*/
#include <stdio.h>

int countChars(char str[]);
void printOutput(char str[], int charCount);

int main()
{
    char myString[] = "This is a char array, C's version of a";

    int charCount = countChars(myString);
    
    printOutput(myString, charCount);
}

int countChars(char str[])
{
    int count = 0;

    for (int idx = 0; str[idx] != '\0'; idx++)
    {
        count++;
    }
        return count;
}

void printOutput(char str[], int count) {
    printf("%s", str);
    printf("String is \"%s\" and char count is %d.", str, count);
}