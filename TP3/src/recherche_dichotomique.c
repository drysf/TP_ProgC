#include <stdio.h>

int main() {
    int tab[100];
    for (int i = 0; i < 100; i++) {
        tab[i] = i * 2 - 50;
    }
    int cherche = 5;
    int debut = 0;
    int fin = 99;
    int trouve = 0;
    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (tab[milieu] == cherche) {
            trouve = 1;
            break;
        } else if (tab[milieu] < cherche) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    if (trouve) {
        printf("entier présent\n");
    } else {
        printf("entier absent\n");
    }
    return 0;
}