#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number (0 to stop): ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
    }
    printf("Total sum = %d\n", sum);
    return 0;
}
