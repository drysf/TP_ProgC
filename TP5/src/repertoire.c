#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include "repertoire.h"

void lire_dossier(char *chemin) {
    DIR *dir = opendir(chemin);
    if (dir == NULL) {
        printf("Erreur ouverture répertoire\n");
        return;
    }
    struct dirent *entree;
    while ((entree = readdir(dir)) != NULL) {
        if (strcmp(entree->d_name, ".") != 0 && strcmp(entree->d_name, "..") != 0) {
            printf("%s\n", entree->d_name);
        }
    }
    closedir(dir);
}

void lire_dossier_recursif(char *chemin) {
    DIR *dir = opendir(chemin);
    if (dir == NULL) {
        return;
    }
    struct dirent *entree;
    while ((entree = readdir(dir)) != NULL) {
        if (strcmp(entree->d_name, ".") != 0 && strcmp(entree->d_name, "..") != 0) {
            char nouveau_chemin[1024];
            snprintf(nouveau_chemin, sizeof(nouveau_chemin), "%s/%s", chemin, entree->d_name);
            printf("%s\n", nouveau_chemin);
            if (entree->d_type == DT_DIR) {
                lire_dossier_recursif(nouveau_chemin);
            }
        }
    }
    closedir(dir);
}

void lire_dossier_iteratif(char *chemin) {
    char pile[100][1024];
    int sommet = 0;
    strcpy(pile[sommet++], chemin);
    while (sommet > 0) {
        char courant[1024];
        strcpy(courant, pile[--sommet]);
        DIR *dir = opendir(courant);
        if (dir == NULL) continue;
        struct dirent *entree;
        while ((entree = readdir(dir)) != NULL) {
            if (strcmp(entree->d_name, ".") != 0 && strcmp(entree->d_name, "..") != 0) {
                char nouveau_chemin[1024];
                snprintf(nouveau_chemin, sizeof(nouveau_chemin), "%s/%s", courant, entree->d_name);
                printf("%s\n", nouveau_chemin);
                if (entree->d_type == DT_DIR && sommet < 100) {
                    strcpy(pile[sommet++], nouveau_chemin);
                }
            }
        }
        closedir(dir);
    }
}