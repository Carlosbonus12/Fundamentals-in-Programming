#include <stdio.h>

int main() {
    int grade;
    
    printf("Enter your grade:");
    scanf("%d", &grade);
    
    switch (grade / 10) {
        case 10:
        case 9:
        printf("Grade: A\n");
        break;
        
        case 8:
        printf("Grade: B\n");
        break;
        
        case 7:
        printf("Grade: C\n");
        break;
        
      default:
            if (grade >= 0 && grade <= 60) {
                printf("Grade: Failed\n");
            } else {
                printf("Invalid grade input.\n");
            }
            break;
    }
    
    return 0;
}