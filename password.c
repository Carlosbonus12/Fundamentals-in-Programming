#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "admin123") != 0);

    printf("Access granted.\n");
    return 0;
}
