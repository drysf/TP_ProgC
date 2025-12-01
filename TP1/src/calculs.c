

#include <stdio.h>

int main(void)
{
    int num1 = 12;
    int num2 = 4;
    char op = '*';  

    int resultat;

    switch (op)
    {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Erreur : division par zéro !\n");
                break;
            }
            resultat = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, resultat);
            break;

        case '%':
            if (num2 == 0)
            {
                printf("Erreur : modulo par zéro !\n");
                break;
            }
            resultat = num1 % num2;
            printf("%d %% %d = %d\n", num1, num2, resultat);
            break;

        case '&':
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
