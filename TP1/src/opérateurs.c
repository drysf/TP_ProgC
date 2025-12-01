#include <stdio.h>

int main(void)
{
    int a = 16;
    int b = 3;

    // ----- Opérations arithmétiques -----
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);        // division entière
    printf("a %% b = %d\n", a % b);       // %% pour afficher %

    // ----- Opérations logiques / comparaisons -----
    printf("a == b : %d\n", a == b);       // 0 = faux, 1 = vrai
    printf("a > b  : %d\n", a > b);        // 1 car 16 > 3

    return 0;
}
