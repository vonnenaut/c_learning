#include <stdio.h>

int main()
{
    enum company { Google, Facebook, Xerox, Yahoo, Ebay, Microsoft };

    enum company my_company = Ebay;

    printf("Value of my_company is %d\n", my_company);

    return 0;
}
