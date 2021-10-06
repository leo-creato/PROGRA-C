#include <stdio.h>

int main() {
    int compter =  100;
    int ligne;
    int colonne;
    for(ligne = 1; ligne < compter+1; ligne++) {
        if(ligne == 1) {
            printf("*\n");
        }
        
        else if(ligne == 2) {
            printf("**\n");
        }
        
        else if(ligne == compter) {
            for(; compter > 0; compter--){
                printf("*");
            }   
        }
        else {
            printf("*");
            for(colonne = 2; colonne < ligne; colonne++) {
                printf("#");
            }
            printf("*\n");
        }    
    }
    printf("\n");
    return 0;
}
