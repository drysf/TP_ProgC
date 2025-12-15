#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Bernard", "Thomas", "Robert"};
    char prenoms[5][50] = {"Marie", "Pierre", "Julie", "Luc", "Sophie"};
    char adresses[5][100] = {
        "20 Bd Niels Bohr, Lyon",
        "22 Bd Niels Bohr, Lyon",
        "24 Bd Niels Bohr, Lyon",
        "26 Bd Niels Bohr, Lyon",
        "28 Bd Niels Bohr, Lyon"
    };
    float notesProgC[5] = {16.5, 14.0, 15.5, 12.0, 18.0};
    float notesSE[5] = {12.1, 14.1, 13.5, 11.0, 16.5};
    for (int i = 0; i < 5; i++) {
        printf("\u00c9tudiant %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prénom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note ProgC: %.1f\n", notesProgC[i]);
        printf("Note SE: %.1f\n\n", notesSE[i]);
    }
    return 0;
}