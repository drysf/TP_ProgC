#include <stdio.h>

int factorielle(int n) {
    if (n == 0) {
        printf("fact(0): 1\n");
        return 1;
    }
    int valeur = n * factorielle(n - 1);
    printf("fact(%d): %d\n", n, valeur);
    return valeur;
}

int main() {
    int n = 5;
    printf("Calcul de %d!\n", n);
    int resultat = factorielle(n);
    printf("Résultat final: %d\n", resultat);
    return 0;
}