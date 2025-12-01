#include <stdio.h>

void afficher_binaire(int n)
{
    int taille = 32;  

    for (int i = taille - 1; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);

        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main(void)
{
    int tests[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++)
    {
        printf("%d en binaire = ", tests[i]);
        afficher_binaire(tests[i]);
    }

    return 0;
}
