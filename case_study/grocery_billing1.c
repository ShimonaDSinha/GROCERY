/*include <stdio.h>
#include <stdlib.h>
#include "grocery_billing1.h"

void add_item(char ***names, float *prices, int *quantities, int *numItems, int *capacity) {
    if (*numItems >= *capacity) {
        *capacity *= 2;
        *names = realloc(*names, *capacity * sizeof(char*));
        prices = realloc(prices, *capacity * sizeof(float));
        quantities = realloc(quantities, *capacity * sizeof(int));
    }

    (*names)[*numItems] = malloc(MAX_NAME_LENGTH * sizeof(char));

    printf("Enter item name: ");
    scanf("%s", (*names)[*numItems]);
    printf("Enter item price: ");
    scanf("%f", &prices[*numItems]);
    printf("Enter quantity: ");
    scanf("%d", &quantities[*numItems]);
    printf("Item added to bill.\n");
    (*numItems)++;
}

float calculate_total(float *prices, int *quantities, int numItems) {
    float total = 0;
    for (int i = 0; i < numItems; i++) {
        total += prices[i] * quantities[i];
    }
    return total;
}

void generate_receipt(char **names, float *prices, int *quantities, int numItems, char *customerName, char *customerAddress, float discount) {
    float total_cost = calculate_total(prices, quantities, numItems);
    float discount_amount = total_cost * (discount / 100.0);
    float discounted_total = total_cost - discount_amount;

    printf("********** Grocery Bill **********\n");
    printf("Customer Name: %s\n", customerName);
    printf("Customer Address: %s\n", customerAddress);
    printf("----------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        printf("%s: $%.2f x %d = $%.2f\n", names[i], 
               prices[i], quantities[i], 
               prices[i] * quantities[i]);
    }
    printf("----------------------------------\n");
    printf("Total: $%.2f\n", total_cost);
    printf("Discount: %.2f%%\n", discount);
    printf("Discounted Amount: $%.2f\n", discount_amount);
    printf("Discounted Total: $%.2f\n", discounted_total);
    printf("\n");
}*/


//updated code
/*#include <stdio.h>
#include <stdlib.h>
#include "grocery_billing1.h"
#include "login.h"

void add_item(Item **items, int *numItems, int *capacity) {
    if (*numItems >= *capacity) {
        *capacity *= 2;
        *items = realloc(*items, *capacity * sizeof(Item));
    }

    printf("Enter item name: ");
    scanf("%s", (*items)[*numItems].name);
    printf("Enter item price: ");
    scanf("%f", &(*items)[*numItems].price);
    printf("Enter quantity: ");
    scanf("%d", &(*items)[*numItems].quantity);
    printf("Item added to bill.\n");
    (*numItems)++;
}

float calculate_total(const Item *items, int numItems) {
    float total = 0;
    for (int i = 0; i < numItems; i++) {
        total += items[i].price * items[i].quantity;
    }
    return total;
}

void generate_receipt(const Item *items, int numItems, const Customer *customer, float discount) {
    float total_cost = calculate_total(items, numItems);
    float discount_amount = total_cost * (discount / 100.0);
    float discounted_total = total_cost - discount_amount;

    printf("********** Grocery Bill **********\n");
    printf("Customer Name: %s\n", customer->name);
    printf("Customer Address: %s\n", customer->address);
    printf("----------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        printf("%s: $%.2f x %d = $%.2f\n", items[i].name, 
               items[i].price, items[i].quantity, 
               items[i].price * items[i].quantity);
    }
    printf("----------------------------------\n");
    printf("Total: $%.2f\n", total_cost);
    printf("Discount: %.2f%%\n", discount);
    printf("Discounted Amount: $%.2f\n", discount_amount);
    printf("Discounted Total: $%.2f\n", discounted_total);
    printf("\n");
}*/

//update-3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grocery_billing1.h"

void add_item(Item *items, int *numItems, int *capacity) {
    if (*numItems >= *capacity) {
        *capacity *= 2;
        items = realloc(items, *capacity * sizeof(Item));
    }

    printf("Enter item name: ");
    scanf("%s", items[*numItems].name);
    printf("Enter item price: ");
    scanf("%f", &items[*numItems].price);
    printf("Enter quantity: ");
    scanf("%d", &items[*numItems].quantity);
    printf("Item added to bill.\n");
    (*numItems)++;
}

float calculate_total(Item *items, int numItems) {
    float total = 0;
    for (int i = 0; i < numItems; i++) {
        total += items[i].price * items[i].quantity;
    }
    return total;
}

void generate_receipt(Item *items, int numItems, Customer *customer) {
    float total_cost = calculate_total(items, numItems);
    float discount_amount = total_cost * (customer->discount / 100.0);
    float discounted_total = total_cost - discount_amount;

    printf("********** Grocery Bill **********\n");
    printf("Customer Name: %s\n", customer->name);
    printf("Customer Address: %s\n", customer->address);
    printf("----------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        printf("%s: $%.2f x %d = $%.2f\n", items[i].name, 
               items[i].price, items[i].quantity, 
               items[i].price * items[i].quantity);
    }
    printf("----------------------------------\n");
    printf("Total: $%.2f\n", total_cost);
    printf("Discount: %.2f%%\n", customer->discount);
    printf("Discounted Amount: $%.2f\n", discount_amount);
    printf("Discounted Total: $%.2f\n", discounted_total);
    printf("\n");

    FILE *file = fopen("receipt.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    fprintf(file, "********** Grocery Bill **********\n");
    fprintf(file, "Customer Name: %s\n", customer->name);
    fprintf(file, "Customer Address: %s\n", customer->address);
    fprintf(file, "----------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        fprintf(file, "%s: $%.2f x %d = $%.2f\n", items[i].name, 
                items[i].price, items[i].quantity, 
                items[i].price * items[i].quantity);
    }
    fprintf(file, "----------------------------------\n");
    fprintf(file, "Total: $%.2f\n", total_cost);
    fprintf(file, "Discount: %.2f%%\n", customer->discount);
    fprintf(file, "Discounted Amount: $%.2f\n", discount_amount);
    fprintf(file, "Discounted Total: $%.2f\n", discounted_total);
    fprintf(file, "\n");
    fclose(file);
}




