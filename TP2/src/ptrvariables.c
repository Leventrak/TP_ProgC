#include <stdio.h>

int main() {
    char c = 'A';
    short s = 100;
    int i = 1000;
    long int li = 10000;
    long long int lli = 100000;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 9.42;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n");
    printf("char:           adresse = %p, valeur = 0x%X\n", (void*)pc, *pc);
    printf("short:          adresse = %p, valeur = 0x%X\n", (void*)ps, *ps);
    printf("int:            adresse = %p, valeur = 0x%X\n", (void*)pi, *pi);
    printf("long int:       adresse = %p, valeur = 0x%lX\n", (void*)pli, *pli);
    printf("long long int:  adresse = %p, valeur = 0x%llX\n", (void*)plli, *plli);
    printf("float:          adresse = %p, valeur = 0x%X\n", (void*)pf, *(unsigned int*)pf);
    printf("double:         adresse = %p, valeur = 0x%llX\n", (void*)pd, *(unsigned long long*)pd);
    printf("long double:    adresse = %p, valeur = <affichage spécifique>\n", (void*)pld);

    *pc = 'Z';
    *ps = 200;
    *pi = 2000;
    *pli = 20000;
    *plli = 200000;
    *pf = 1.23f;
    *pd = 4.56;
    *pld = 7.89;

    printf("\n=== Après manipulation ===\n");
    printf("char:           adresse = %p, valeur = 0x%X\n", (void*)pc, *pc);
    printf("short:          adresse = %p, valeur = 0x%X\n", (void*)ps, *ps);
    printf("int:            adresse = %p, valeur = 0x%X\n", (void*)pi, *pi);
    printf("long int:       adresse = %p, valeur = 0x%lX\n", (void*)pli, *pli);
    printf("long long int:  adresse = %p, valeur = 0x%llX\n", (void*)plli, *plli);
    printf("float:          adresse = %p, valeur = 0x%X\n", (void*)pf, *(unsigned int*)pf);
    printf("double:         adresse = %p, valeur = 0x%llX\n", (void*)pd, *(unsigned long long*)pd);
    printf("long double:    adresse = %p, valeur = <affichage spécifique>\n", (void*)pld);

    return 0;
}
