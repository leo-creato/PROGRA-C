#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct Couleurs { //création de la structure couleur
    char rouge;  

    char vert;

    char bleu;

    char alpha;

};

int main() {
    struct Couleurs tableau[100]; 

    srand(time(NULL));

    for (int i = 0; i < 97; i++) { //création du tableau de 100 couleurs aléatoires (on en crée ici 97 pour pouvoir tester le programme avec 3 couleurs similaires)
    
        int rouge = rand(); //on assigne des numéros aléatoires pour chaque couleur
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

    
    int cpt = 1; //compteur du nombre d'occurence de chaque couleur
    
    for (int i = 0; i < 100; i++) { //on parcourt une première fois la liste des couleurs
        for (int j = i+1; j < 100; j++) { //on la parcourt une deuxième fois pour comparer chaque couleur du tableau
            if ((tableau[i].rouge == tableau[j].rouge) && (tableau[i].vert == tableau[j].vert) && (tableau[i].bleu == tableau[j].bleu) && (tableau[i].alpha == tableau[j].alpha)) { //si deux couleurs dans le tableau sont similaires
                tableau[j].rouge = -1; //on remplace dans le tableau une des couleurs pour ne plus la prendre en compte ensuite
                tableau[j].vert = -1;
                tableau[j].bleu = -1;
                tableau[j].alpha = -1;
                cpt ++; //on incrémente le compteur des occurences 
            }
        }
        
        if ((tableau[i].rouge != -1) && (tableau[i].vert != -1) && (tableau[i].bleu != -1) && (tableau[i].alpha != -1)) { //si on est sur une couleur qui doit être traitée (et non un doublon)
            printf("%02x %02x %02x %02x, %d \n", tableau[i].rouge, tableau[i].vert, tableau[i].bleu, tableau[i].alpha, cpt); //on affiche la couleur en question avec son nombre d'occurence dans le tableau

        }
        cpt = 1; //on réinitialise le compteur à 1 puis on repart dans les deux boucles for
    }
          
    return(0);
}
 
