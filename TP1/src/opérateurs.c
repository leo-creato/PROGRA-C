#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;
    printf("a=%d",a);
    printf("b=%d",b);
    printf("addition %d\n",a+b);
    printf("soustraction %d\n",a-b);
    printf("multiplication %d\n",a*b);
    printf("division entière %d\n",a/b);
    printf("reste de la division euclidienne %d\n",a%b);
    printf("non a %d\n",!a);
    printf("a et b %d\n",a && b);
    printf("a ou b %d\n",a || b);
    return 0;
}
