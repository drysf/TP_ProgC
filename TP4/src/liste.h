#ifndef LISTE_H
#define LISTE_H

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct Noeud {
    struct Couleur couleur;
    struct Noeud *suivant;
};

struct Liste {
    struct Noeud *tete;
};

void init_liste(struct Liste *liste);
void insertion(struct Couleur *couleur, struct Liste *liste);
void parcours(struct Liste *liste);

#endif