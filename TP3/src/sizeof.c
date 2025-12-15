#include <stdio.h>

int main() {
    int x;
    printf("Taille de int: %zu octets\n", sizeof(int));
    printf("Taille de int*: %zu octets\n", sizeof(int*));
    printf("Taille de int**: %zu octets\n", sizeof(int**));
    printf("Taille de char*: %zu octets\n", sizeof(char*));
    printf("Taille de char**: %zu octets\n", sizeof(char**));
    printf("Taille de char***: %zu octets\n", sizeof(char***));
    printf("Taille de float*: %zu octets\n", sizeof(float*));
    printf("Taille de float**: %zu octets\n", sizeof(float**));
    printf("Taille de float***: %zu octets\n", sizeof(float***));
    return 0;
}