#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <op> <num1> <num2>\n", argv[0]);
        return 1;
    }
    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int resultat;
    switch(op) {
        case '+': resultat = num1 + num2; break;
        case '-': resultat = num1 - num2; break;
        case '*': resultat = num1 * num2; break;
        case '/': resultat = num1 / num2; break;
        case '%': resultat = num1 % num2; break;
        case '&': resultat = num1 & num2; break;
        case '|': resultat = num1 | num2; break;
        case '~': resultat = ~num1; break;
        default: printf("Opérateur invalide\n"); return 1;
    }
    printf("Résultat: %d\n", resultat);
    return 0;
}