#include <stdio.h>
#include "header.h"
#include "header2.hpp"
int main(){
    int i = 0;
    printf("Please enter a number: ");
    scanf("%d", &i);
    printf("You inputted the number %d\n", i);
    return 0;
}