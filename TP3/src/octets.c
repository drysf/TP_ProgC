#include <stdio.h>

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201L;
    float f = 2.5f;
    double d = 1.0;
    long double ld = 1.0L;
    unsigned char *ps = (unsigned char*)&s;
    unsigned char *pi = (unsigned char*)&i;
    unsigned char *pl = (unsigned char*)&l;
    unsigned char *pf = (unsigned char*)&f;
    unsigned char *pd = (unsigned char*)&d;
    unsigned char *pld = (unsigned char*)&ld;
    printf("Octets de short:\n");
    for (int j = 0; j < sizeof(short); j++) {
        printf(" %02x", ps[j]);
    }
    printf("\n\nOctets de int:\n");
    for (int j = 0; j < sizeof(int); j++) {
        printf(" %02x", pi[j]);
    }
    printf("\n\nOctets de long int:\n");
    for (int j = 0; j < sizeof(long int); j++) {
        printf(" %02x", pl[j]);
    }
    printf("\n\nOctets de float:\n");
    for (int j = 0; j < sizeof(float); j++) {
        printf(" %02x", pf[j]);
    }
    printf("\n\nOctets de double:\n");
    for (int j = 0; j < sizeof(double); j++) {
        printf(" %02x", pd[j]);
    }
    printf("\n\nOctets de long double:\n");
    for (int j = 0; j < sizeof(long double); j++) {
        printf(" %02x", pld[j]);
    }
    printf("\n");
    return 0;
}