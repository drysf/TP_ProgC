#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct Liste *liste) {
    liste->tete = NULL;
}

void insertion(struct Couleur *couleur, struct Liste *liste) {
    struct Noeud *nouveau = malloc(sizeof(struct Noeud));
    nouveau->couleur = *couleur;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(struct Liste *liste) {
    struct Noeud *courant = liste->tete;
    while (courant != NULL) {
        printf("R=%d G=%d B=%d A=%d\n",
               courant->couleur.r,
               courant->couleur.g,
               courant->couleur.b,
               courant->couleur.a);
        courant = courant->suivant;
    }
}