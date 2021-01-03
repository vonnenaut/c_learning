#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "They're neither moral nor majority";
    char temp[50];
    
    // copying a string
    strncpy(temp, myString, sizeof(temp)-1);
    printf("The string is: %s", temp);

    // concatenating a string onto another
    char mySecondString[] = "my string";
    char input[80];

    printf("\nEnter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is::::\n", mySecondString, input);
    printf("%s", strcat(input, mySecondString));

    return 0;
}