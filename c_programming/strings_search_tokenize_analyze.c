#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char buf[100];
  int nLetters = 0;
  int nDigits = 0;
  int nPunct = 0;

  printf("Enter a string of less than %d characters:\n", 100);
  scanf("%s", buf);

  int i = 0;

  while(buf[i])
  {
    if(isalpha(buf[i]))
    ++nLetters;
    else if(isdigit(buf[i]))
    ++nDigits;
    else if(ispunct(buf[i]))
    ++nPunct;
    ++i;
  }

  printf("\nYour string contained %d letters, %d digits and %d punctuation characters.", nLetters, nDigits, nPunct);

  return 0;
}