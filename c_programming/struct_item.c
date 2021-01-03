#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *anItem);
void printItem(struct item *anItem);

int main()
{
    struct item myItem;
    struct item *myItemPtr;

    myItemPtr = &myItem;
    
    myItemPtr->itemName = (char *) malloc(30 * sizeof(char));

    if(myItemPtr == NULL)
        exit(-1);

    readItem(myItemPtr);

    printItem(myItemPtr);

    free(myItemPtr->itemName);

    return 0;
}

void readItem(struct item *anItem)
{
    // read in from user a product name, price and quantity
    // contents read should be stored in the struct referenced by passed pointer arg
    printf("Input product name: ");
    scanf("%s", anItem->itemName);

    printf("Input unit price: ");
    scanf("%f", &anItem->price);

    printf("Input quantity: ");
    scanf("%d", &anItem->quantity);

    anItem->amount = (float)anItem->quantity * anItem->price;
}

void printItem(struct item *anItem)
{
    // print contents of struct that pointer references
    printf("\nProduct name:  %s", anItem->itemName);
    printf("\nUnit Price:  %.2f", anItem->price);
    printf("\nQuantity: %d", anItem->quantity);
    printf("\nTotal Amount:  %.2f\n\n", anItem->amount);
}