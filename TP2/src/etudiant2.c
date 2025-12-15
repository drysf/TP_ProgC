#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Bd Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Bd Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;
    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Julie");
    strcpy(etudiants[2].adresse, "24 Bd Niels Bohr, Lyon");
    etudiants[2].note1 = 15.5;
    etudiants[2].note2 = 13.5;
    strcpy(etudiants[3].nom, "Thomas");
    strcpy(etudiants[3].prenom, "Luc");
    strcpy(etudiants[3].adresse, "26 Bd Niels Bohr, Lyon");
    etudiants[3].note1 = 12.0;
    etudiants[3].note2 = 11.0;
    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "28 Bd Niels Bohr, Lyon");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 16.5;
    for (int i = 0; i < 5; i++) {
        printf("\u00c9tudiant %d:\n", i + 1);
        printf("Nom: %s\n", etudiants[i].nom);
        printf("Prénom: %s\n", etudiants[i].prenom);
        printf("Adresse: %s\n", etudiants[i].adresse);
        printf("Note 1: %.1f\n", etudiants[i].note1);
        printf("Note 2: %.1f\n\n", etudiants[i].note2);
    }
    return 0;
}