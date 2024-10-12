#ifndef HEADER_H
#define HEADER_H

// Standard library includes
#include <stdio.h>
#include <stdlib.h>

// Macro definitions
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

// Type definitions
typedef struct {
    int id;
    char name[50];
} Item;

// Function declarations
void printItem(const Item *item);
int calculateArea(int radius);

#endif // HEADER_H
