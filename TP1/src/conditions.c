#include <stdio.h>

int main() {
    int nb = 1000;
    while (nb > 0) {
        if ((nb % 2 == 0) && (nb % 15 == 0)) {
            printf("%d est divisible par 2 et 15\n", nb);
        }
        nb--;
    }
    
    nb = 1000;
    while (nb > 0) {
        if ((nb % 103 == 0) || (nb % 107 == 0)) {
            printf("%d est divisible par 103 ou 107\n", nb);
        }
        nb--;
    }
    
    nb = 1000;
    while (nb > 0) {
        if ((nb % 7 == 0) || (nb % 5 == 0)) {
            if (nb % 3 != 0) {
            printf("%d est divisble par 7 ou 5 mais pas par 3\n",nb);
            }
        }
        nb--;
    }
}
