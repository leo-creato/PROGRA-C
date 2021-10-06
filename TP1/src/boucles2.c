#include <stdio.h>

int main() {
    int compter =  20;
    int ligne = 1;
    while(ligne < compter+1) {
        int colonne = 2;
        if(ligne == 1) {
            printf("*\n");
        }
        
        else if(ligne == 2) {
            printf("**\n");
        }
        
        else if(ligne == compter) {
            while(compter > 0) {
                printf("*");
                compter--;
            }   
        }
        else {
            printf("*");
            while(colonne < ligne) {
                printf("#");
                colonne++;
            }
            printf("*\n");
        }   
        ligne++;
    }
    printf("\n");
    return 0;
}
