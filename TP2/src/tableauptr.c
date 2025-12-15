#include <stdio.h>

int main() {
    int tab[5] = {10, 20, 30, 40, 50};
    int *ptr = tab;
    printf("Éléments du tableau:\n");
    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d (via pointeur: %d)\n", i, tab[i], *(ptr + i));
    }
    for (int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;
    }
    printf("\nAprès modification:\n");
    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return 0;
}