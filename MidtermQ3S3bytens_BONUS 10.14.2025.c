#include <stdio.h>

int main() {
    int ck;
    
    for (ck = 0; ck <= 10000000; ck = ck + 10) {
        printf("%d\n", ck);
    }
    
    return 0;
}
