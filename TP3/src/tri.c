#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 200 - 50;
    }
    printf("Tableau non trié:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("...\n");
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    printf("\nTableau trié par ordre croissant:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("...\n");
    return 0;
}