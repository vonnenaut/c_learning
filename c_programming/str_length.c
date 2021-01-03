/*
Write function that counts
number of chars in a string (length)
  - can't use strlen library function
  - function should take char array as param
  - returns an int (length of string)
*/
#include <stdio.h>

int countChars(const char str[]);
void printOutput(char str[], int charCount);
char* concatStrings(char result[], const char str1[], const char str2[]);
char* copyChars();
int areEqual(char str1[], char str2[]);

int main()
{
    char myString[] = "This is a char array, C's version of a string.";

    int charCount = countChars(myString);

    printOutput(myString, charCount);

    char mySecondStr[] = "  It is a different experience from that with Python or Ruby.";
    char result[120];
    printf("\n%s\n", concatStrings(result, myString, mySecondStr));

    char str1[] = "A string.";
    char str2[] = "A string.";
    printf("%d\n", areEqual(str1, str2) == 1);

    char str3[] = "Another string.";
    char str4[] = "A different one.";
    printf("%d\n", areEqual(str3, str4) == 0);
} 

int countChars(const char str[]) {
    int count = 0;

    for (int idx = 0; str[idx] != '\0'; idx++) {
        count++;
    }

    return count;
}

void printOutput(char str[], int count) {
    printf("\nString: \"%s\" \nCharacter count: %d.\n", str, count);
}

char* concatStrings(char result[], const char str1[], const char str2[]) {
  int idx1, idx2;

  for (idx1 = 0; str1[idx1] != '\0'; idx1++) {
    result[idx1] = str1[idx1];
  }

  for (idx2 = 0; str2[idx2] != '\0'; idx2++) {
    result[idx1 + idx2] = str2[idx2];
  }

  result[idx1 + idx2] = '\0';
  
  if (result != NULL) {
    return result;
  } else {
    return NULL;
  }
}

// char* copyChars(char result[], char str[], const int startIdx) {
//   int resultIdx = startIdx;

//   for (int idx = 0; str[idx] != '\0'; idx++) {
//     result[resultIdx] = str[idx];
    
//     if (resultIdx < countChars(result)) {
//       resultIdx++;
//     } else {
//       return NULL;
//     }
//   }

//   return result;
// }

int areEqual(char str1[], char str2[]) {
  const int length_str1 = countChars(str1);
  
  if (countChars(str2) != length_str1) {
      return 0;
  }

  for (int idx = 0; idx < length_str1; idx++) {
    if (str1[idx] != str2[idx]) {
      return 0;
    }
  }

  return 1;
}