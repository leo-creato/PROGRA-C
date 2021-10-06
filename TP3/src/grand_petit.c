#include <stdio.h>

int main() {    
    int tableau[100]; 
    int i;
    for(i = 0; i < 100; i++) {
        tableau[i] = i;
    }
    int grand = 0;
    int petit = 32767; //plus grand entier possible
    for(i = 0; i < 100; i++) {
        if(tableau[i] > grand) {
            grand = tableau[i];
        }
        if(tableau[i] < petit) {
            petit = tableau[i];
        }
    }
    printf("plus grand entier du tableau: %d\n", grand);
    printf("plus petit entier du tableau: %d\n", petit);
    return(0);
}
            
    
