#include <stdio.h>

#define N 100

int main() {
    int tableau[N]; 
    int i;
    for(i = 0; i < N; i++) {
        tableau[i] = i;
    }
    int num;
    printf("Tapez le num svp: ");
    scanf("%d",&num);
    for(i = 0; i < N; i++) {
        if(tableau[i] == num) {
            printf("Entier présent\n");
        }
    }
    return(0);
}
    
