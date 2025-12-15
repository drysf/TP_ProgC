#include <stdio.h>
#include "operator.h"
#include "fichier.h"

void exercice_operator() {
    int num1, num2;
    char op;
    printf("Entrez num1: ");
    scanf("%d", &num1);
    printf("Entrez num2: ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~): ");
    scanf(" %c", &op);
    switch(op) {
        case '+': printf("Résultat: %d\n", somme(num1, num2)); break;
        case '-': printf("Résultat: %d\n", difference(num1, num2)); break;
        case '*': printf("Résultat: %d\n", produit(num1, num2)); break;
        case '/': printf("Résultat: %d\n", quotient(num1, num2)); break;
        case '%': printf("Résultat: %d\n", modulo(num1, num2)); break;
        case '&': printf("Résultat: %d\n", et(num1, num2)); break;
        case '|': printf("Résultat: %d\n", ou(num1, num2)); break;
        case '~': printf("Résultat: %d\n", negation(num1)); break;
    }
}

void exercice_fichier() {
    int choix;
    char nom[100], message[1000];
    printf("1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix: ");
    scanf("%d", &choix);
    if (choix == 1) {
        printf("Entrez le nom du fichier: ");
        scanf("%s", nom);
        lire_fichier(nom);
    } else {
        printf("Entrez le nom du fichier: ");
        scanf("%s", nom);
        printf("Entrez le message: ");
        scanf(" %[^\n]", message);
        ecrire_dans_fichier(nom, message);
    }
}

int main() {
    int choix;
    printf("Choisissez l'exercice:\n1. Opérateurs\n2. Fichiers\nChoix: ");
    scanf("%d", &choix);
    if (choix == 1) {
        exercice_operator();
    } else if (choix == 2) {
        exercice_fichier();
    }
    return 0;
}
