#include <stdio.h>

int main() {
    char c[] = "bonjoursalut";
    int i;
    for (i = 0; c[i] != 0; i++) {}
    printf("nombre de caractères dans la chaine: %d\n", i);
    
    char c2[100];
    int n;
    for (n = 0; n <= i; n++) {
        c2[n] = c[n];
    }
    c2[n+1] = 0;
    printf("chaine copiée: %s\n", c2);

    int j;
    for (j = 0; c2[j] != 0; j++) {}
    
    char c3[100];
    for (n = 0; n <= i ; n++) {
        c3[n] = c[n];
    }
    
    for (n=0; n <= j; n++) {
        c3[n+i] = c2[n];
    }
        
    printf("chaines concaténées: %s\n", c3);
    return 0;
}

        
