#include <stdio.h > 
#include <stdlib.h >
#include <math.h>

int main () {
    // int n,m, i;
    // double suma;
    // printf("unesite dva broja n i m (n < m) \n");
    // scanf("%d %d" ,&n, &m);
    // if(n < m) {
    //     suma = 0;
    //     i = n;
    //     while(i <= m) {
    //         if(i % 2 == 0) suma += pow(i,2);
    //         else suma += pow(i,3);
    //         i++;
    //     }
    //     printf("Dobijena suma je %lf", suma);
    // }

    // da li je untei broj prost
    // int br, p, i;
    // printf("Unesite jedan ceo broj \n");
    // scanf("%d", &br);
    // p = 1;
    // i = 2;
    // while(i <= br - 1) {
    //     if(br % i == 0) p = 0;
    //     i++;
    // }

    // if(p == 1) printf("Broj jeste prost");
    // else printf("Broj nije prost");

    //fibonacijev niz

    // int n,i, fp, fpp, ft;
    // printf("Koliko zelite elemenata u Fibonacijevom nizu \n");
    // scanf("%d" ,&n);
    // fp = 1;
    // fpp = 1;
    // printf("Elementi Fibonacijevog niza su 1 1");
    // i = 3;
    // while(i <= n) {
    //     ft = fp + fpp;
    //     printf("%d", ft);
    //     fpp = fp;
    //     fp = ft;
    //     i++;
    // }

    //...............

    // float a, s;
    // int i;

    // do{
    // printf("Unesite pozitivan broj a");
    // scanf("%f", &a);
    // } while(a <= 0);

    // i = 1;
    // s = 0;
    
    // do{
    //     s = s + 1.0 / i;
    //     i++;
    // } while(s <= a);
    // printf("Prvi broj veci od %f je %f", a, s);

    //....................

    //Da li je uneti broj Nivenov. broj koji je deljiv sa sumom svojih cifata

    int br, s, pom, zc;
    printf("Unesite broj za proveru");
    scanf("%d", &br);
    pom = br;
    s = 0;
    while(pom > 0) {
        zc = pom % 10;
        s += zc;
        pom = pom /10;
    }

    if(br %s ==0) printf("broj je nivenov");
    else printf("Broj nije Nivenov");

    return 0;
}