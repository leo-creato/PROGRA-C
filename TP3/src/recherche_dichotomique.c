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
    for(j = 0; j < N; j++) {
        for(i = 0; i < N; i++) {
            if(tableau[i] < petit) {
                petit = tableau[i];
                indice = i;
            }
        }
        tableau[indice] = 32767;
        tableau_croiss[j] = petit;
        petit = 32767;
    }
    int num;
    printf("Tapez le num svp: ");
    scanf("%d",&num);
    int debut = 0;
    int fin = N;
    char trouve = 'F';
    int mil;
    while((trouve == 'F') & (debut <= fin)) {
        mil = (debut + fin)/2;
        if(tableau_croiss[mil] == num) {
            trouve = 'V';
        }
        else {
            if(num > tableau_croiss[mil]) {
                debut = mil+1;
            }
            else {
                fin = mil-1;
            }
        }
    }
    if(trouve == 'V') {
        printf("Entier présent\n");
    }
    else {
        printf("Entier non présent\n");
    }
    return(0);
}
