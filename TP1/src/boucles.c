#include <stdio.h>

int main(void)
{
    int compteur = 5;   // changer la valeur pour tester (< 10)

    if (compteur >= 10)
    {
        printf("Erreur : compteur doit être < 10.\n");
        return 1;
    }

    // Boucle pour chaque ligne
    for (int i = 1; i <= compteur; i++)
    {
        // Boucle pour les colonnes
        for (int j = 1; j <= i; j++)
        {
            // Exemple : lignes 3 et 4 utilisent #
            if (i == 3 || i == 4)
                printf("# ");
            else
                printf("* ");
        }

        printf("\n");
    }

    return 0;
}
