#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters (q to quit): ");
    scanf(" %c", &ch);  // Notice the space before %c to consume whitespace

    while (ch != 'q') {
        printf("You entered: %c\n", ch);
        scanf(" %c", &ch);
    }

    return 0;
}
