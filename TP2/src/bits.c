#include <stdio.h>

int main() {
    int d =      0b00010000001100000001000000100000;
    int masque = 0b00010000000000000001000000000000;
    int bits = d & masque;
    if (bits == masque) {
        printf("%d\n", 1);
    }
    else{
        printf("%d\n", 0);
    }
    return 0;
}

    
