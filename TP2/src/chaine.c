#include <stdio.h>

int longueur(char *s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void copier(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concatener(char *dest, char *src) {
    int i = 0;
    while (dest[i] != '\0') i++;
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char s1[100] = "Hello";
    char s2[] = " World!";
    char copie[100];
    printf("Longueur: %d\n", longueur(s1));
    copier(copie, s1);
    printf("Copie: %s\n", copie);
    concatener(s1, s2);
    printf("Concaténation: %s\n", s1);
    return 0;
}