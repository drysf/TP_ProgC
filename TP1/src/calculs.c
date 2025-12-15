

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int somme = a + b;
    int produit = a * b;
    printf("Somme: %d\n", somme);
    printf("Produit: %d\n", produit);
    return 0;
}
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu !\n", op);
            break;
    }

    return 0;
}
