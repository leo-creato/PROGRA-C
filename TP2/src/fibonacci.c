#include <stdio.h>

int main() {
    int n = 10;
    int u0 = 1;
    int u1 = 1;
    int rep = n-1;
    while (rep > 0) {
        int un = u0 +u1;
        u0 = u1;
        u1 = un;
        rep--;
        printf("u%d = %d\n", n-rep, un);
    }
    return 0;
}

    
