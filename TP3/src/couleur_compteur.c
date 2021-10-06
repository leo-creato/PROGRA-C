#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct Couleurs {
    __u_char rouge; //__u_ pour protéger les variables

    __u_char vert;

    __u_char bleu;

    __u_char alpha;

};

int main() {
    struct Couleurs tableau[10];

    srand(time(NULL));

    for( int i = 0 ; i < 97 ; i++) {
    
        int rouge = rand();
        int vert = rand();
        int bleu = rand();
        int alpha = rand();

        tableau[i].rouge = rouge;
        tableau[i].vert = vert;
        tableau[i].bleu = bleu;
        tableau[i].alpha = alpha;

    }
    tableau[97].rouge = 0xaa;
    tableau[97].vert = 0xaa;
    tableau[97].bleu = 0xaa;
    tableau[97].alpha = 0xaa;
    
    tableau[98].rouge = 0xaa;
    tableau[98].vert = 0xaa;
    tableau[98].bleu = 0xaa;
    tableau[98].alpha = 0xaa;
    
    tableau[99].rouge = 0xaa;
    tableau[99].vert = 0xaa;
    tableau[99].bleu = 0xaa;
    tableau[99].alpha = 0xaa;

    
    int cpt = 1;
    
    for (int i = 0; i < 100; i++) {
        for (int j = i+1; j < 100; j++) {
            if ((tableau[i].rouge == tableau[j].rouge) && (tableau[i].vert == tableau[j].vert) && (tableau[i].bleu == tableau[j].bleu) && (tableau[i].alpha == tableau[j].alpha)) {
                sup(tableau.rouge,j);
                sup(tableau.vert,j);
                sup(tableau.bleu,j);
                sup(tableau.alpha,j);
                cpt ++;
            }
        }
        if (i != 99) {
            printf("%02x %02x %02x %02x, %d \n", tableau[i].rouge, tableau[i].vert, tableau[i].bleu, tableau[i].alpha, cpt);
        }
        cpt = 1;
    }  
    
    return(0);
}
 
