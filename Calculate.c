#include <stdio.h>

int main() {
    int c, k, product;
    
    printf("Enter a number:");
    scanf("%d", &c);
    
    printf("Enter a number:");
    scanf("%d", &k);
    
    product = c * k;
    
    // Calculations
    printf("\n------------ RESULTS ------------\n");
    printf("The product is: %d\n", product);
    
    return 0;
}