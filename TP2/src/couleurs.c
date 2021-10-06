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

    for( int i = 0 ; i < 10 ; i++) {
    
        int rouge = rand();
        int vert = rand();
        int bleu = rand();
        int alpha = rand();

        tableau[i].rouge = rouge;
        tableau[i].vert = vert;
        tableau[i].bleu = bleu;
        tableau[i].alpha = alpha;

        printf("%02x %02x %02x %02x \n", tableau[i].rouge, tableau[i].vert, tableau[i].bleu, tableau[i].alpha);

    }
    return 0;
}
 
