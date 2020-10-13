#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char *itemName; // will be a string (char array)
    int quantity;
    float price;
    float amount; // price * quantity
};

void readItem(struct item * pointer);
void printItem(struct item * pointer);

int main(void)
{
    struct item book, *bookPtr;
    bookPtr = NULL;
    bookPtr = &book;
    bookPtr->itemName = (char *)malloc(50 * sizeof(char)); // must initialize because it is a pointer member of the struct -- it must point to an address -- so allocate memory for it (an address in memory with so much size dedicated to it)
    if(bookPtr == NULL)
        exit(-1); // if no memory was allocated, exit main

    readItem(bookPtr);
    printItem(bookPtr);

    free(bookPtr->itemName);

    return 0;
}

void readItem(struct item * pointer)
{
    printf("Please enter the title of a book: \n");
    gets(pointer->itemName);
   
    printf("Please enter the quantity of this title to order: \n");
    scanf("%d", &pointer->quantity);
    
    printf("Please enter the price of the title: ");
    scanf("%f", &pointer->price);

    pointer->amount = (float)pointer->quantity * pointer->price;

}

    void printItem(struct item * pointer)
    {
        printf("We will order %d copies of the title \"%s\" at $%.2f each, amounting to a charge of $%.2f. Thank you!", pointer->quantity, pointer->itemName, pointer->price, pointer->amount);
    }


