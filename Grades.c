#include <stdio.h>

int main() {
    int grades = 100;
    
    if (grades>=75 && grades<=100) {
        printf("Passed");
    } else if (grades>=50 && grades<=74) {
        printf("Failed");
    } else {
        printf("Invalid");
    }
    
    return 0;
}