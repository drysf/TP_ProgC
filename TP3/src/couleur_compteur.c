#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCompteur {
    struct Couleur couleur;
    int compte;
};

int main() {
    struct Couleur couleurs[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = 0xff;
    }
    struct CouleurCompteur distinctes[100];
    int nb_distinctes = 0;
    for (int i = 0; i < 100; i++) {
        int existe = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a) {
                distinctes[j].compte++;
                existe = 1;
                break;
            }
        }
        if (!existe) {
            distinctes[nb_distinctes].couleur = couleurs[i];
            distinctes[nb_distinctes].compte = 1;
            nb_distinctes++;
        }
    }
    for (int i = 0; i < nb_distinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compte);
    }
    return 0;
}