#include <stdio.h>
#include <math.h>

int main() {

    // int a = 30;
    // int b = 20;

    // a += b;
    // printf("%d", a); // 50
    //  a -= b;
    // printf("%d", a); // 10
    
    // int a = 31;
    // int b = 20; 
    // a%=b;
    // vrednost sa leve strane operatora se deli sa desnom stranom i ostatakk tog deljenja postaje nova vrednost varijable sa leve strane.

    // printf("%d", a); // 11

    // a*= b;
    // a/=b;
    // a%=b

    // int ceo;
    // float realan;

    // printf("Unesite jedan ceo broj i jedan realan: ");
    // scanf("%d %f", &ceo, &realan );
    // printf("%d %f", ceo, realan);

    // sastaviti program kojim se realan broj unet sa tastatur zaokruzuje na dve decimale

    // float a;
    // printf("Unesite broj: ");
    // scanf("%f", &a);
    // printf("Broj je %.2f", a);
    // zaokruzivanje na dve decimale

    //.............................................................

    // Sastaviti program koji omogućuje unos cijelog broja s tastature i njegov prikaz u decimalnom, oktalnom i heksadekadskom obliku.

    // int broj;
    // printf("Unesite broj: ");
    // scanf("%d", &broj);
    // printf(" decimalni oblik je %d", broj);
    // printf(" oktalni oblik je %o", broj);
    // printf(" heksadecimalni oblik je %x", broj);

    //.................................................................

    // Sastaviti program koji omogućava unos dva cela broja i ispisuje njihov zbir, razliku, proizvod, celobrojni količnik, realni količnik i ostatak pri celobrojnom deljenju.

    // int a, b;
    // printf("Unesite dva broja: ");
    // scanf("%d %d", &a, &b);
    // printf("Zbir brojeva je %d, razlika je %d, proizvod je %d, kolicnik je %d", a + b, a -b, a * b, a /b);
    // printf("\nRealan kolicnik je %f", (float) a / (float)b);
    // printf("Ostatak pri deljenju je %d", a % b);

    //...................................................

    // double neki = 1.2;
    // printf("%f \n", neki);
    // printf("%lf", neki);

    // printf("%c%2c%2c", 'A', 'B', 'C');
    // adding spaces

    // printf("ovo je nesto \t i jos nesto");
    //adding space

    // printf("%c and ASCI code %d",  'A', 'A');.

    //..............................................

    // 2.12

    // char znak;
    // printf("Unesite neki znak");
    // scanf("%c", &znak);
    // printf("Znak \t ASCII kod \n");
    // printf("%c \t %d \n", znak, znak);
    // printf("%c \t %d \n", znak+1, znak+1);
    // printf("%c \t %d \n", znak+2, znak+2);

    //............................................

    //2.14

    // int a, b, pomocni;
    // printf("uneti broj a i b");
    // scanf("%d %d", &a, &b);
    // pomocni = a;
    // a = b;
    // b = pomocni;
    // printf("a je %d a b je %d", a, b);

    //2.17

    // float a, b;
    // // double a, b;
    // printf("Unesite stranicu a");
    // scanf("%f", &a);
    // printf("Unesite stranicu b");
    // scanf("%f", &b);
    // printf("Povrsina pravougaonikaje %.2f", a * b);
    // printf("Obim je: %.2f", 2 * a + 2 * b); 

    //For printf, arguments of type float are promoted to double so both %f and %lf are used for double. For scanf, you should use %f for float and %lf for double.
    //There is no difference between %f and %lf in the printf

    //.............................................

    // int a = 25;
    // int y = sqrt(25);
    // printf("%d", y); // 5

    // int x = pow(5, 2);
    // // 5^2
    // printf("%d", x); // 25

    //.....................................

    //2.27

    // int trocifreni;
    // printf("Unesite trocifreni broj");
    // scanf("%d", &trocifreni);
    // int A = trocifreni / 100;
    // int B = (trocifreni / 10) % 10;
    // int C = (trocifreni % 10);
    // printf("Cifre su %d %d %d", A, B, C);
    // printf("Zbir cifara je %d", A + B +C);

    //......................................

    // 2.28

    //  int n, n500, n100, n1;
    //  printf("Unesite cenu proizvoda: ");
    //  scanf("%d", &n);
    //  n500 = n / 500;
    //  n100 = (n % 500) / 100;
    //  n1 = (n % 500) % 100;
    //  printf("Treba nam %d novcanica od 500, %d novcanica od 100, %d novcanica od 1", n500, n100, n1);

    // 3.1

    // int broj;
    // printf("Unesite broj");
    // scanf("%d", &broj);
    // if(broj % 2 == 0) printf("Broj je paran");
    // else printf("Broj je neparan");

    //3.2

    // int broj;
    // printf("Unesite broj");
    // scanf("%d", &broj);
    // if(broj > 0) printf("Broj je pozitivan");
    // else if(broj < 0) printf("Broj je negativan");
    // else printf("Broj je jedank nuli");

    //3.3

    // int prviBroj, drugiBroj;
    // printf("Unesite prvi broj");
    // scanf("%d", &prviBroj);
    // printf("Unesite drugi broj");
    // scanf("%d", &drugiBroj);
    // if(prviBroj > drugiBroj) printf("Prvi broj je veci od drugog");
    // else if(drugiBroj > prviBroj) printf("Drugii broj je veci od provog");
    // else printf("Brojevi su jednaki");

    //3.4

    // int prvi, drugi, treci;
    // printf("Unesite tri broja");
    // scanf("%d %d %d", &prvi, &drugi, &treci);
    // int najveci = prvi;
    // if(drugi > prvi) najveci = drugi;
    // if(treci > prvi) najveci = treci;

    // printf("Najveci broj je broj %d", najveci);

    //3.5
    // double x, y, z, pomocna; 
    // printf("Unesite tri broja");
    // scanf("%lf %lf %lf", &x, &y, &z);
    // if(x > y) {
    //     pomocna = x;
    //     x = y;
    //     y = pomocna;
    // }

    // if(x > z) {
    //     pomocna = x;
    //     x = z;
    //     z = pomocna;
    // }

    // if(y > z) {
    //     pomocna = z;
    //     z = y;
    //     y = pomocna;
    // }

    // printf("Uredeni brojevi %.2f %.2f %.2f", x, y, z);

    // 3.7

    // int poeni;
    // printf("Unesite poene: ");
    // scanf("%d", &poeni);
    // if(poeni > 90) printf("Ocena je 10");
    // else if(poeni > 80) printf("Ocena je 9");
    // else if(poeni > 70) printf("Ocena je 8");
    // else if(poeni > 60) printf("Ocena je 7");
    // else if(poeni > 50) printf("Ocena je 6");
    // else printf("Ocena je 5");

    // 3.8
    // int a, b, x;
    // printf("Unesite opseg od do: ");
    // scanf("%d %d", &a, &b);
    // printf("Unesite broj");
    // scanf("%d", &x);
    // if(x * x <= b && x * x >= a) printf("broj %d na kvadrat pripada opsegu izmedu %d i %d", x, a, b);
    // else printf("Ne pripada");

    // 3.9
    // int br1, br2;
    // printf("Unesite dva broja");
    // scanf("%d %d", &br1, &br2);
    // if(br1 > br2) printf("Rezultat je %d", br1 -br2);
    // else if(br2 > br1) printf("Rezultat je %d", br2 - br1);

    //4.4
    // int br, i, suma;
    // printf("Unesite broj: ");
    // scanf("%d", &br);
    // for(i = 1; i <= br; i++) {
    //     suma += i;
    // }
    // printf("Suma je %d", suma);

    //4.5

    // int n, i;
    // float x, suma = 0;
    // printf("n = ");
    // scanf("%d", &n);
    // printf("Unesite %d brojeva: \n", n);

    // for(i = 1; i <= n; i++) {
    //     scanf("%f", &x);
    //     suma += x;
    // }

    // printf("Suma je %.2f", suma);
    // printf("Aritmeticka sredina je %.2f", suma / n);

    // 4.6
    // int n, suma = 1, i;
    // printf("Unesite broj n: ");
    // scanf("%d", &n);
    // for(i = n; i > 0; i--) {
    //     suma *= i;
    // }

    // printf("Suma je %d", suma);

    // 4.7

    // int n, i;
    // long suma = 1, suma2 = 0; 
    // printf("Unesite broj: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++) {
    //     suma *= i;
    //     suma2 += suma;
    // }
    // printf("Rezultat je %ld", suma2);

    // 4.12

    int n, n1, n2 = 1;
    printf("Koliko brojeva zelite da unesete");
    scanf("%d", &n);
    printf("Unesite broj: ");
    for(int i = 1; i <= n; i++) {
        scanf("%d", &n1);
        if(n1 > n2) n2 = n1;
    }

    printf("Najveci broj je %d", n2);


    return 0;   
}