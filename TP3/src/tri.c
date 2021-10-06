#include <stdio.h>

#define N 100

int main() {    
    int tableau[N]; 
    int tableau_croiss[N];
    int i;
    for(i = N; i > 0; i--) {
        tableau[N-i] = i;
    }
    int petit = 32767; //plus grand entier possible
    int j;
    int indice;
    printf("Tableau croissant: [");
    for(j = 0; j < N; j++) {
        for(i = 0; i < N; i++) {
            if(tableau[i] < petit) {
                petit = tableau[i];
                indice = i;
            }
        }
        tableau[indice] = 32767;
        tableau_croiss[j] = petit;
        printf("%d,", tableau_croiss[j]);
        petit = 32767;
    }
    printf("]\n");
    return(0);
}
    
