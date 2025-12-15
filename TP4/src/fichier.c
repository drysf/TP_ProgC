#include <stdio.h>
#include "fichier.h"

void lire_fichier(char *nom_fichier) {
    FILE *f = fopen(nom_fichier, "r");
    if (f == NULL) {
        printf("Erreur ouverture fichier\n");
        return;
    }
    char ligne[1000];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }
    fclose(f);
}

void ecrire_dans_fichier(char *nom_fichier, char *message) {
    FILE *f = fopen(nom_fichier, "w");
    if (f == NULL) {
        printf("Erreur ouverture fichier\n");
        return;
    }
    fprintf(f, "%s", message);
    fclose(f);
}