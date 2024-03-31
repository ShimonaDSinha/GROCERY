#ifndef GROCERY_BILLING1_H
#define GROCERY_BILLING1_H

#define MAX_NAME_LENGTH 50

void add_item(char ***names, float *prices, int *quantities, int *numItems, int *capacity);
float calculate_total(float *prices, int *quantities, int numItems);
void generate_receipt(char **names, float *prices, int *quantities, int numItems, char *customerName, char *customerAddress, float discount);

#endif
