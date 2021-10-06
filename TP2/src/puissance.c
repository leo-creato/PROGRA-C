#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;
    while (b > 1) {
        a*=a;
        b--;
    }
    printf("%d\n", a);
    return 0;
}
