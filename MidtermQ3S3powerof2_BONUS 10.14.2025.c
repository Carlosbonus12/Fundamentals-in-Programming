#include <stdio.h>

int main() {
    int ck;
    
    printf("Enter your desired number to be count by the power of two (up to 8192):");
    scanf("%d", &ck);

    for (ck; ck <= 16384; ck = ck * 2) {
        printf("%d\n", ck);
    }

    return 0;
}
