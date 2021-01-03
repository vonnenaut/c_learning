#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text: ");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char)); // allows for different sizes
    // for different systems; 
    // calloc allows specifying size as a parameter explicity

    if(text != NULL)
    {
        printf("\nEnter some text: \n");
        scanf(" ");
        gets(text); // allows reading multiple strings separated by spaces
        printf("Inputted text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}