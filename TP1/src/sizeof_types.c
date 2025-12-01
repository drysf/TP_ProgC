#include <stdio.h>

int main() {
    printf("Tailles des types de base en C (en octets) :\n\n");

    printf("char (signed)        : %zu octet(s)\n", sizeof(signed char));
    printf("char (unsigned)      : %zu octet(s)\n", sizeof(unsigned char));

    printf("short (signed)       : %zu octet(s)\n", sizeof(signed short));
    printf("short (unsigned)     : %zu octet(s)\n", sizeof(unsigned short));

    printf("int (signed)         : %zu octet(s)\n", sizeof(signed int));
    printf("int (unsigned)       : %zu octet(s)\n", sizeof(unsigned int));

    printf("long int (signed)    : %zu octet(s)\n", sizeof(signed long int));
    printf("long int (unsigned)  : %zu octet(s)\n", sizeof(unsigned long int));

    printf("long long (signed)   : %zu octet(s)\n", sizeof(signed long long int));
    printf("long long (unsigned) : %zu octet(s)\n", sizeof(unsigned long long int));

    printf("float                : %zu octet(s)\n", sizeof(float));
    printf("double               : %zu octet(s)\n", sizeof(double));
    printf("long double          : %zu octet(s)\n", sizeof(long double));

    return 0;
}

