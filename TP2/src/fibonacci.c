#include <stdio.h>

int main() {
    int n = 7;
    int u0 = 0, u1 = 1;
    printf("%d ", u0);
    if (n > 0) printf("%d ", u1);
    for (int i = 2; i <= n; i++) {
        int un = u0 + u1;
        printf("%d ", un);
        u0 = u1;
        u1 = un;
    }
    printf("\n");
    return 0;
}