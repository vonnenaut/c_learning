#include <stdio.h>

/* strcpy: copy t to s; array subscript version */
void strcpy_array(char *s, char *t)
{
    int i;

    i = 0;

    while ((s[i] = t[i]) != '\0')
        i++;
}

/* strcpy: copy t to s; pointer version 1 */
void strcpy_pointer1(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

/* strcpy: copy t to s; pointer version 2 */
void strcpy_pointer2(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

void main()
{
    char *str1 = "A string this is.";
    char *str2 = "This, also, a string.";
    
    int str1_size = sizeof(str1) / sizeof(str1[0]);
    int str2_size = sizeof(str2) / sizeof(str2[0]);
    
    char *str3[str1_size];
    char *str4[str2_size];  

    strcpy_array(str3, str1);
    strcpy_pointer1(str4, str2);
}