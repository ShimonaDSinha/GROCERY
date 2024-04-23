/*#ifndef GROCERY_BILLING1_H
#define GROCERY_BILLING1_H

#define MAX_NAME_LENGTH 50

void add_item(char ***names, float *prices, int *quantities, int *numItems, int *capacity);
float calculate_total(float *prices, int *quantities, int numItems);
void generate_receipt(char **names, float *prices, int *quantities, int numItems, char *customerName, char *customerAddress, float discount);

#endif*/


//updated code

#ifndef GROCERY_BILLING1_H
#define GROCERY_BILLING1_H

#define INITIAL_CAPACITY 10
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    float discount;
} Customer;

typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
} Item;

void add_item(Item **items, int *numItems, int *capacity);
float calculate_total(const Item *items, int numItems);
void generate_receipt(const Item *items, int numItems, const Customer *customer, float discount);

#endif
