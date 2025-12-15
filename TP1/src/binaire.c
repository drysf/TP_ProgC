#include <stdio.h>

int main() {
    int n = 42;
    printf("Nombre: %d\n", n);
    printf("Binaire: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
    return 0;
}
