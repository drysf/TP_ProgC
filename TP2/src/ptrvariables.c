#include <stdio.h>

int main() {
    int i = 42;
    float f = 3.14;
    double d = 2.718;
    int *pi = &i;
    float *pf = &f;
    double *pd = &d;
    printf("Avant:\n");
    printf("int: adresse=%p, valeur=%d\n", (void*)&i, i);
    printf("float: adresse=%p, valeur=%f\n", (void*)&f, f);
    printf("double: adresse=%p, valeur=%lf\n", (void*)&d, d);
    *pi = 100;
    *pf = 9.81;
    *pd = 1.414;
    printf("\nAprès:\n");
    printf("int: adresse=%p, valeur=%d\n", (void*)&i, i);
    printf("float: adresse=%p, valeur=%f\n", (void*)&f, f);
    printf("double: adresse=%p, valeur=%lf\n", (void*)&d, d);
    return 0;
}