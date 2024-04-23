/*#include <stdio.h>
#include <stdlib.h>
#include "grocery_billing1.h"

#define INITIAL_CAPACITY 10
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

int main() {
    char **names = malloc(INITIAL_CAPACITY * sizeof(char*));
    float *prices = malloc(INITIAL_CAPACITY * sizeof(float));
    int *quantities = malloc(INITIAL_CAPACITY * sizeof(int));
    int numItems = 0;
    int capacity = INITIAL_CAPACITY;
    int choice;
    float discount;

    // Getting customer details
    char customerName[MAX_NAME_LENGTH];
    char customerAddress[MAX_ADDRESS_LENGTH];

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter customer address: ");
    scanf(" %[^\n]", customerAddress);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add item\n");
        printf("2. Generate bill\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_item(&names, prices, quantities, &numItems, &capacity);
                break;
            case 2:
                generate_receipt(names, prices, quantities, numItems, customerName, customerAddress, discount);
                break;
            case 3:
                printf("Thank you for shopping with us!\n");

                // Free memory for each name
                for (int i = 0; i < numItems; i++) {
                    free(names[i]);
                }

                // Free memory for the names array
                free(names);

                free(prices);
                free(quantities);
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
 }*/
//updated:
#include <stdio.h>
#include <stdlib.h>
#include "grocery_billing1.h"
#include "login.h" // Include login header

int main() {
    // Authenticate user
    int authenticated = authenticate();
    if (!authenticated) {
        printf("Authentication failed. Exiting...\n");
        return 1;
    }

    Item *items = malloc(INITIAL_CAPACITY * sizeof(Item));
    int numItems = 0;
    int capacity = INITIAL_CAPACITY;
    int choice;
    Customer customer;

    // Getting customer details
    printf("Enter customer name: ");
    scanf("%s", customer.name);

    printf("Enter customer address: ");
    scanf(" %[^\n]", customer.address);

    printf("Enter discount percentage: ");
    scanf("%f", &customer.discount);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add item\n");
        printf("2. Generate bill\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_item(&items, &numItems, &capacity);
                break;
            case 2:
                generate_receipt(items, numItems, &customer, customer.discount);
                break;
            case 3:
                printf("Thank you for shopping with us %s!\n",customer.name);
                free(items);
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}




