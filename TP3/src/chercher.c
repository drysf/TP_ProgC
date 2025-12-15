#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 200 - 50;
    }
    int cherche = 7;
    int trouve = 0;
    for (int i = 0; i < 100; i++) {
        if (tab[i] == cherche) {
            trouve = 1;
            break;
        }
    }
    if (trouve) {
        printf("entier présent\n");
    } else {
        printf("entier absent\n");
    }
    return 0;
}