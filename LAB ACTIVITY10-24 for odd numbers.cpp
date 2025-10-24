#include <stdio.h>

int main() {
    int ck;
    
    for (ck = 1; ck <= 9999999; ck = ck + 2) {
        printf("%d\n", ck);
    }
    
    return 0;
}