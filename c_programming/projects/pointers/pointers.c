#include <stdio.h>

void main()
{
  int value = 5;
  int *pValue = NULL;

  pValue = &value;

  printf("value address: %p\n", &value);
  printf("Pointer address: %p\n", &pValue);
  printf("Pointer value: %p\n", pValue);
  printf("Value pointed to: %d\n", *pValue);
}