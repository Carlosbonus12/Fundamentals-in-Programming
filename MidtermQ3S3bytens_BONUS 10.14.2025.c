#include <stdio.h>

int main() {
    int ck;
    
    printf("Enter your desired number to be count by tens (up to 10,000):");
    scanf("%d", &ck);
    
    for (ck; ck <= 10000; ck = ck + 10) {
        printf("%d\n", ck);
    }
    
    return 0;
}
