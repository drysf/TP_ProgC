#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <fichier>\n", argv[0]);
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        printf("Erreur ouverture fichier\n");
        return 1;
    }
    char phrase[100];
    printf("Entrez la phrase à rechercher: ");
    scanf(" %[^\n]", phrase);
    char ligne[1000];
    int num_ligne = 0;
    printf("\nRésultats de la recherche:\n");
    while (fgets(ligne, sizeof(ligne), f)) {
        num_ligne++;
        char *pos = ligne;
        int compte = 0;
        while ((pos = strstr(pos, phrase)) != NULL) {
            compte++;
            pos++;
        }
        if (compte > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, compte);
        }
    }
    fclose(f);
    return 0;
}