#include <stdio.h>

int main() {
    int choice;
    do {
        printf("1. Say Hello\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Hello!\n");
        }
    } while (choice != 2);

    return 0;
}
