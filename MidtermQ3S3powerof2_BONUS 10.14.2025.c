#include <stdio.h>

int main() {
    int ck;

    for (ck = 2; ck <= 4096; ck = ck * 2) {
        printf("%d\n", ck);
    }

    return 0;
}
