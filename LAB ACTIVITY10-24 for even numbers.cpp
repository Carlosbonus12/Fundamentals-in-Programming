#include <stdio.h>

int main() {
    int ck;
    
    for (ck = 0; ck <= 1000000; ck = ck + 2) {
        printf("%d\n", ck);
	}
    return 0;
}