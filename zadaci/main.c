#include <stdio.h>
#include <math.h>
#define MAX 100
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


// int main() {

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

    // int n, n1, n2 = 1;
    // printf("Koliko brojeva zelite da unesete");
    // scanf("%d", &n);
    // printf("Unesite broj: ");
    // for(int i = 1; i <= n; i++) {
    //     scanf("%d", &n1);
    //     if(n1 > n2) n2 = n1;
    // }

    // printf("Najveci broj je %d", n2);

    // 4.13

    // int suma = 0, i;
    // printf("Brojevi deljivi sa 6 \n");
    // for(i = 1; i <= 100; i++) {
    //     if(i % 6 == 0 ){
    //         suma += i;
    //         printf("\n %d", i);
    //     }
    // }
    // printf("Suma je %d", suma);

    // 4.14

    // int i;
    // for(i = 100; i<= 999; i++) {
    //     int prvaCifra = i / 100;
    //     int drugaCifra = (i / 10) % 10;
    //     int trecaCifra = (i % 10);
    //     if(prvaCifra + 2 == drugaCifra && drugaCifra + 1 == trecaCifra) printf("\n %d", i);
    // }

    // int a, b, c;
    // for(a = 1; a <= 9; a++) {
    //     for(b = 3; b <= 9; b++) {
    //         for(c = 4; c <= 9; c++) {
    //             if(a + 2 == b && b+1 == c) {
    //                 printf("\n %d%d%d",a, b, c );
    //             }
    //         }
    //     }
    // }

    // 4.15

    // int i;
    // printf("Amstrongovi brojevi su: ");
    // for(i = 100; i <= 999; i++) {
    //     int prva = i / 100;
    //     int druga = (i / 10) % 10;
    //     int treca = (i % 10);

    //     // if(pow(prva, 3) + pow(druga, 3) + pow(treca, 3) == i) {
    //         if(prva * prva * prva + druga * druga * druga + treca * treca * treca == i) {
    //         printf("\n %d", i);
    //     }
    // }

    // int a, b, c, broj;
    // printf("Amstrongovi brojevi: ");
    // for(a = 1; a <= 9; a++ ){
    //     for(b = 0; b <= 9; b++) {
    //         for(c = 0; c <= 9; c++  ){
    //             broj = a * 100 + b * 10 + c; 
    //             if(pow(a, 3) + pow(b, 3) + pow(c, 3) == broj) {
    //                 printf("\n %d", broj);
    //                 }

    //         }
    //     }
    // }

    // 4.16
    // int i;
    // printf("\n Brojvei su: ");
    // for(i = 100; i <= 900; i++) {
        // int prva = i /100;
    //     int druga = (i % 100) / 10;
    //     int prveDve = prva * 10 + druga;
    //     int treca = i % 10;
    //     if(pow(prveDve, 2) - pow(treca, 2) == i) printf("\n %d" , i);
    // }

    // 4.17

    // int i;
    // printf("Brojevi su: ");
    // for(i = 100; i <= 999; i++) {
    //     int prva = i /100;
    //     int treca = i % 10;

    //     if(i % (prva * 10 + treca) == 0) printf("\n %d", i);
    // }

    // int a, b, c, broj, dvocif;
    // for(a = 1; a <= 9; a++) {
    //     for(b = 0; b <= 9; b++) {
    //         for(c = 0; c<= 9; c++) {
    //             broj = a * 100 + b * 10 + c;
    //             dvocif = a * 10 + c;
    //             if(broj % dvocif == 0) printf("\n %d", broj);
              
    //         }
    //     }
    // }

    // 4.18

    // int suma = 0, i, br = 0;

    // for(i = 100; i<= 999; i++) {
    //      int prva = i /100;
    //      int druga = (i % 100) / 10;
    //     int treca = i % 10;

    //     if(prva + druga + treca == 5) {
    //         suma += i;
    //         br++;
    //     }
    // }
    // printf("Suma je %d i %d brojeva ima ovu osobinu", suma, br);

    // 4.19

    // int broj, i;
    // printf("Unesite broj: \n");
    // scanf("%d", &broj);
    // printf("Delioci su: \n");
    // for(i = 1; i <= broj; i++) {
    //     if(broj % i == 0) printf("\n %d", i);
    // }

    // 4.20

    // int suma = 0, i, broj;
    // printf("Unesite broj: ");
    // scanf("%d", &broj);

    // for(i = 1; i < broj; i++) {
    //     if(broj % i == 0 ) suma += i;
    // }

    // if(broj == suma) printf("Broj je savrsen");
    // else printf("Broj nije savrsen");

    // 4.21

    // int ucenici, i = 0, jedan = 0, ocena;
    // float zbirOcena = 0;
    // printf("Unesite broj ucenika: ");
    // scanf("%d", &ucenici);
    // for(i = 1; i <= ucenici; i++) {
    //     printf("Unesite ocenu %d ucenika", i);
    //     scanf("%d", &ocena);

    //     zbirOcena += ocena;
    //     if(ocena == 1) jedan++;
    // }

    // float prosek = zbirOcena / ucenici;

    // printf("Prosek ocena je %.2f", prosek);
    // printf("\n Broj jedinica je %d", jedan);

    // 4.22

    // int sec, min, sat, br, prvaS, drugaS, prvaM,drugaM, prvaSec, drugaSec;
    // printf("Uneste broj: ");
    // scanf("%d", &br);
    // for(sat = 0; sat <= 23; sat++) {
    //         prvaS = sat / 10 ;
    //         drugaS = sat % 10;
    //     for(min = 0; min <= 60; min++) {
    //         prvaM = min / 10;
    //         drugaM = min % 10;
    //         for(sec = 0; sec <= 60; sec++) {
    //         prvaSec = sec / 10;
    //         drugaSec = sec % 10;
    //             if(prvaS + drugaS + prvaM + drugaM + prvaSec + drugaSec == br)  printf("\n %d sat : %d min %d sec", sat, min, sec);
    //         }
    //     }
    // }

    // 5.2

    // int i = 1;
    // while(i < 10) {
    //     if(i % 2 == 0) printf("\n %d", i);
    //     i++;
    // }


    //5.3

    // int br, i = 1, suma = 0;
    // printf("Unesite broj");
    // scanf("%d", &br);
    // while(i <= br) {
    //     suma += i;
    //     i++;
    // }

    // printf("Suma je %d", suma);

    // 5.4
    // int br, i = 1, suma = 0;
    // printf("Unesite broj");
    // scanf("%d", &br);
    // while(i <= br) {
    //     suma += i;
    //     i = i + 3;
    // }

    // printf("Suma je jednaka %d", suma);

    // 5.5
    // int n, i = 1;
    // double suma = 0;
    // printf("Unesite broj n: ");
    // scanf("%d", &n);
    // while(i <= n) {  
    //     suma += 1 / (pow(2 * i + 1, 2));
    //     i++;
    // }

    // printf("Rezultat je: %lf", suma);


    // 5.6

    // int s = 0, n, m;
    // printf("Unesite broj n: ");
    // scanf("%d", &n);
    // printf("Unesite broj m: ");
    // scanf("%d", &m);
    // while(n <= m) {
    //     if(n % 2 == 0) s += n * n;
    //     else s += pow(n, 3);
    //     n++;
    // }

    // printf("Suma je %d", s);

    // 5.7

    // int n, i = 3, suma = 2;
    // int prviBroj = 1;
    // int drugiBroj = 1;
    // printf("Unesite broj n: ");
    // scanf("%d", &n);
    // printf("\n f1 = %d", prviBroj);
    // printf("\n f2 = %d", drugiBroj);

    // while(i <=n) {
    //     int noviBroj = prviBroj + drugiBroj;
    //     printf("\n f%d = %d", i, noviBroj);
    //     suma += noviBroj;
    //     if(i % 2 == 0) prviBroj = noviBroj;
    //     else drugiBroj = noviBroj;
    //     i++;
    // }

    // printf("\n suma brojeva je %d", suma);

    // 5.8

    // int a, n, i = 0, s = 1;

    // printf("Unesite broj a: ");
    // scanf("%d", &a);
    // printf("Unesite stepen n: ");
    // scanf("%d", &n);

    // // double reazultat = pow(a,n);

    // // printf("Broj %d na %d stpen je %.0lf", a, n, reazultat);

    // while(i < n) {
    //     s *= a;
    //     i++;
    // }
    // printf("Suma je %d", s);

    // 5.9

    // int br = 1, s = 0, brojevi = 0 ;

    // while(br != 0 ) {
    //     printf("Unesite broj: ");
    //     scanf("%d", &br);
    //     s += br;
    //     brojevi++;
    // }

    // double sv = s / (brojevi - 1);

    // printf("Srednja vrednost je %.2lf" , sv); 

    // int brojevi = 0;
    // float broj, suma = 0;

    // printf("Unesite niz brojeva, nula za kraj");
    // scanf("%f", &broj);
    // while(broj != 0) {
    //     suma += broj;
    //     brojevi++;
    //     scanf("%f", &broj);
    // }

    // printf("Aritmeticka sredina je %.2f", suma / brojevi);

    // 5.10

    // int brojevi = 0, broj, suma = 0;
    // printf("Unesite niz brojeva, 0 za kraj: ");
    // scanf("%d", &broj);
    // while(broj != 0) {
    //     if(broj >= 2 && broj <= 6) {
    //         suma += broj;
    //         brojevi++;
    //     }
    //     scanf("%d", &broj);
    // }

    // printf("Aritmeticka sredina je: %d", suma / brojevi);

    // 5.12

    // int m, n, p;
    // float suma = 0;
    // printf("Unesite dva broja (m > n)");
    // scanf("%d", &m);
    // scanf("%d", &n);

    // while(m<1 || n<1) scanf("%d%d",&m,&n);

    // if(n > m) {
    //     p = n;
    //     n = m;
    //     m = p;
    // }

    // // while(n <= m) {
    // //     if(n % 2 != 0) suma += sqrt(n);
    // //     n++;
    // // }

    // if(n % 2 == 0) n++;
    // while(n <= m) {
    //     suma += sqrt(n);
    //     n += 2;

    // }

    // printf("Suma je: %.3f", suma);

    // 5.13

    // double suma = 0;
    // int broj, i = 1, znak = 1;
    // printf("Unesite broj");
    // scanf("%d", &broj);
    // while(i <= broj) {
    //     suma += (float) znak / i;
    //     i++;
    //     znak =-znak;
    // }

    // printf("Suma je %.3lf", suma);

    // 5.18

    // int n, k, suma = 0;
    // printf("Unesite broj");
    // scanf("%d", &n);
    // k = n;
    // while(k > 0) {
    //     suma += k % 10;
    //     k /= 10;
    // }

    // if(n % suma == 0) printf("Broj jeste Nivenov");
    // else printf("Broj nije Nivenov");

    // 5.19

    // int n, obrnut = 0;
    // printf("Unesite broj");
    // scanf("%d", &n);

    // while(n > 0) {
    //     obrnut = (obrnut * 10) + (n % 10);
    //     n = n / 10;
    // }

    // printf("Broj je %d", obrnut);

    // 6.3

    // int broj;
    // printf("Unesite broj");

    // do {
    //     scanf("%d", &broj);
    // } while ((broj * broj <=0 || broj * broj>100));

    // printf("Kvadrat broja %d pripada prvoj stotini", broj);

    // 6.6

    // int a, i = 2;
    // double broj = 1;
    // printf("Unesite broj a: ");
    // scanf("%d", &a);
    // do {
    //     broj += (1.0 / i);
    //     i++;

    // }while(broj < a);

    // printf("Broj %.3lf je veci od unetog broja %d", broj, a);
    
    // double broj;
    // broj = 3 / 2;
    // printf("%lf", broj); //  1.000000


    // 6.8

    // int a, b, broj = 0;
    // while(a < 0 || a > 100 || b < 0 || b > 100) {   
    // printf("Unesite granicu od do: ");
    // scanf("%d %d", &a, &b);
    // };

    // int i = a;

    // do {
    //     if(i % 4 == 0) {
    //         printf("%d ",i);
    //         broj++;

    //         if(broj == 10) {
    //             printf("\n");
    //             broj = 0;
    //         }
    //     }
    //     i++;

    // }while(i <= b );

    // 6.9

    // int i = 100, suma = 0, brojac = 0;

    // do{
    //     if(i % 64 == 0 ){
    //         suma += i;
    //         brojac++;
    //     } 
    //     i++;
    // }while( i<=999);

    // printf("Suma je %d i %d brojeva imaju ovu osobinu", suma, brojac);


    // 6.10

    // int m;
    // do {
    // printf("Unesite broj m (veci od 0 a manji od 10): ");
    // scanf("%d", &m);
    // } while(m < 0 || m > 10);

    // int br;
    // int n = 0;
    // do{
    //     scanf("%d", &br);
    //     int pomocna = br;
    //     while(pomocna > 10) {
    //         pomocna = pomocna / 10;
    //     }

    //     if(pomocna == m) {
    //         n++;
    //     }


    // }while(br != 0);

    // printf("%d je brojeva sa ovom osobinom", n);


    // 7.2

    // int broj;

    // for(;;) {
    //     printf("\nUnesite pozitivan ceo broj");
    //     scanf("%d", &broj);
    //     if(broj < 0) break;
    //     printf("\n x=%d \n x * x =%d", broj, broj * broj);
    // }

    // 7.20

    // char slovo;
    // printf("Unesite slovo: \n");
    // scanf("%c", &slovo);
    // switch (slovo)
    // {
    // case 'A':
    // case 'E':
    // case 'I':
    // case 'O':
    // case 'U':
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    // printf("Slovo je samoglasnik");
    //     break;
    // default: 
    // printf("Slovo je suglasnik");
    // }

    // 7.22
    // float operand1, operand2;
    // char operator;
    //  printf("Unesite prvi operand: ");
    // scanf("%f", &operand1);
    // printf("Unesite drugi operand: ");
    // scanf("%f", &operand2);
    // printf("Unesite operator (+, -, *, /): ");
    // scanf(" %c", &operator);

    // switch(operator) {
    //     case '+':
    //     printf("%.2f", operand1 + operand2);
    //     break;
    //     case '-':
    //     printf("%.2f", operand1 - operand2);
    //     break;
    //     case '*':
    //     printf("%.2f", operand1 * operand2);
    //     break;
    //     case '/':
    //     printf("%.2f", operand1 / operand2);
    //     break;
    // }

    // 7.23
    // int a, b;
    // char opcija;
    // printf("Unesite stranicu a i b: ");
    // scanf("%d %d", &a, &b);
    // printf(" Odaberite opciju: Obim(o), povrsina(p), duzina dijagonale(d): ");
    // scanf(" %c", &opcija);

    // float dijagonala = sqrt(a * a + b * b);

    // switch(opcija) {
    //     case 'o':
    //     printf("Obim je %d", 2 * (a * b));
    //     break;
    //     case 'p':
    //     printf("Povrsina je %d", a * b);
    //     break;
    //     case 'd': 
    //     printf("Duzina dijagonale je %.2f", dijagonala);
    //     break;
    // }

    //......................................

    // int a, b;
    // printf("Unesite dva broja");
    // scanf("%d %d", &a, &b);
    // if(a > b) printf("Rezultat je %d", a -b);
    // else printf("Rezultat je %d", b - a);


    // 3.11


    // int x, y;
    // printf("Unesite broj x");
    // scanf("%d", &x);

    // if(x > -2 && x <=2) y = 2 * x;
    // else if(x <= 5 && x <7) y = 3 * x -1;
    // else y = 1 / x;

    // printf("y je %d", y);

    // 3.12

    // int x, y, z;
    // printf("Unesite x i y: \n");
    // scanf("%d %d", &x, &y);


// int y = 32, 32

 // 3.13

//  int a, b, c, s, p ;

//  printf("Unesite a, b, c: ");
//  scanf("%d %d %d", &a, &b, &c); 

//  s = (a +b+ c) /2;
//  p =  (s * (s - a) * (s -b) * (s - c));
//  p = sqrt(s);

//  printf("Povrsina je p", p);

 // 4.10

//  int n;
//  float x;
//  s = sin(x) + pow(sin(x), 2)

// int i;
// int s = 0;
// for(i = 3; i < 10; i++) {
//    s += i;
// }

    // return 0;   
// }

//.........................................................................

// #include <stdio.h>
// #include <math.h>
// #define PI 3.14

//9.1 

// int zbir(int a, int b) {
//     int rezultat;
//     rezultat = a + b;
//     return rezultat;
// }

// int main() {
//     int c;
//     c = zbir(5, 3);
//     printf("\n %d \n", c);

//     return 0;
// }


// 9.2

// int izracunaj (float a, float b, char znak) {
//     float c;
//     switch (znak)
//     {
//     case '+':
//     c = a + b;
//     break;
//     case '*':
//     c = a * b;
//     break;
//     case '/':
//     c = a / b;
//     break;
//     default:  
//         break;
//     }

//     return c;
// }

// int kvadrat(double a, int stepen) {
//     if(stepen == 2) return a * a;
//     else if(stepen == 3) return a * a * a;
// }

// int main() {
//     double x, y;
//     printf("unesite promenljive x i y");
//     scanf("%lf %lf", &x, &y);

//     double z1, z2, z3;
//     z1 = izracunaj(x, kvadrat(y, 2), '+');
//     z2 = kvadrat(x, 3) - izracunaj(x, y, '/');
//     z3 = izracunaj(x, y, '*') + 5 - y;

//     printf("\n %lf \n %lf \n %lf", z1, z2, z3 );

//     return 0;
// }

// 9.3

// int maksimum (int a, int b) {
//     if(a > b) return a;
//     else if(b > a) return b;
//     else return a;
// }

// int main() {
//     int a, b, c ,d;
//     int max1, max2;
//     printf("Unesite 4 broja: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d );
//     max1 = maksimum(a, b);
//     max2 = maksimum(c, d);
//     printf("Najveci broj je %d", maksimum(max1, max2));
//     return 0;
// }

// double povrsina(double r) {
//     return 4 * PI * r * r;
// }

// double zapremina(double r) {
//     return ((4./3.) * PI * r * r * r);
// }

// void ispis(double povrsina, double zapremina) {
//     printf("Povrsina je %lf a zapremina %lf", povrsina, zapremina);
// }

// int main() {
//     double r;
//     printf("unesite poluprecnik r: ");
//     scanf("%lf", &r);
//     ispis(povrsina(r), zapremina(r));
//     return 0;
// }

// 9.7

// void zbirKvadrata(int a, int b) {
//     int parni = 0, neparni = 0, svi = 0;
//     for(int i = a; i <= b; i++) {
//         svi += i * i;
//         if(i % 2 == 0) parni += i * i;
//         else neparni += i * i;
//     }
//     printf("Zbir svih brojeva je %d \n", svi);
//     printf("Zbir parnih je %d \n", parni);
//     printf("Zbir neparnih je %d", neparni);
// }

// int main() {
//     int a, b;
//     printf("Unesite gornju i donju granicu: ");
//     scanf("%d %d", &a, &b);
//     zbirKvadrata(a, b);
//     return 0;
// }

// 9.8

// void suma(int a, int b) {
//     for(int i = a; i <= b; i++) {
//     int broj = i, suma = 0;
//         while(broj != 0) {
//             suma+= broj % 10;
//             broj = broj / 10;
//         }
//         printf("%d = %d \n", i, suma);
//     }
// }

// int main() {
//     int a, b;
//     printf("Unesite granice: ");
//     scanf("%d %d", &a, &b);
//     suma(a, b);
//     return 0;
// }

// 9.10

// int faktorijel(int a) {
//     int suma = 1;
//     for(int i = a; i > 0; i--) {
//         suma *= i;
//     }

//     return suma;
// }

// int main() {
//     int n, k, rezultat;
//     printf("Unesite brojeve n i k: ");
//     scanf("%d %d", &n, &k);
//     rezultat = (faktorijel(n)) / (faktorijel(k) * faktorijel(n -k));
//     printf("Rezultat je %d",rezultat); 
//     return 0;
// }

// 9.11

// long faktorijel(int n) {
//     long suma = 1;
//     for(int i = n; i > 0; i--) {
//         suma *= i;
//     }
//     return suma;
// }

// int main() {
//     long suma = 0;
//     int n;
//     printf("Unesite broj n: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//         suma += faktorijel(i);
//     }

//     printf("suma je %ld", suma);
//     return 0;
// }

//9.12

// long faktorijel(int a) {
//     long suma = 0;
//     while(a > 0) {
//         int cifra = 1;
//         int b = a % 10;
//         for(int i = b; i > 0; i--) {
//             cifra *= i;
//         }
//         suma += cifra;
//         a = a / 10;
//     }

//     return suma;
// }

// int main() {
//     for(int i = 100; i <= 999; i++) {
//         if(faktorijel(i) == i) printf("\n %ld", faktorijel(i));
//     }
//     return 0;
// }

// 9.13

// long stepenovanje(int broj, int stepen) {
//     long suma = 1;
//     for(int i = 1; i <= stepen; i++) {
//         suma *= broj;
//     }
//     return suma;
// }

// int main() {
//     int broj, stepen;
//     printf("Unesite broj i stepen: ");
//     scanf("%d %d", &broj, &stepen);
//     long rezultat = stepenovanje(broj, stepen);
//     printf("Rezultat je %ld", rezultat);
// }

// 9.15

// int prosti(int broj) {
//     for(int i = 2; i <= broj; i++) {
//         if(broj % i == 0 && i != broj) return 0;
//     }
//     return 1;
// }

// int main() {
//     for(int i = 1; i <= 500; i++) {
//         int rezultat = prosti(i);
//         if(rezultat == 1) printf("\n %d", i);
//     }
//     return 0;
// } 

//9.17
 
// int kubovi(int broj) {
//     return broj * broj * broj;
// }

// int amstrongov(int broj) {
//     int suma = 0;
//     int trocifreni = broj;
//     while(trocifreni > 0) {
//     int cifra = trocifreni % 10;
//     suma += kubovi(cifra);
//     trocifreni = trocifreni / 10;
//     }
//     if(suma == broj) return 1;
//     else return 0;
// }

// int main() {
//     for(int i = 100; i <= 999; i++) {
//         int rezultat = amstrongov(i);
//         if(rezultat == 1) printf("\n %d", i);
//     }
//     return 0;
// }

// 9.18

// int sumaCifara(int broj) {
//     int cifra;
//     int suma = 0;
//     while(broj > 0) {
//         cifra = broj % 10;
//         suma += cifra;
//         broj /= 10;
//     }
//     return suma;
// }

// int nivenov(int broj) {
//     int suma = sumaCifara(broj);
//     if(broj % suma == 0) return 1;
//     else return 0;
// }

// int main() {
//     for(int i = 101; i <= 200; i++) {
//         if(nivenov(i) == 1) printf("\n %d", i);
//     }

//     return 0;
// }

// 9.20

// int Faktorijel(int n) {
//     if(n == 1) return 1;
//     return n*Faktorijel(n-1);
// }
    
    
//     int main() {
//     int n;
//     printf("n= ");
//     scanf("%d", &n);
//     printf("%d!= %d", n, Faktorijel(n));
//     return 0;
// }

// 9.30

// int stepenovanje(int broj, int stepen) {
//     if (stepen == 0) return 1;
//     return broj * stepenovanje(broj, stepen - 1);
// }

// int main() {
//     int broj, stepn;
//     printf("Unesite broj i stepen: ");
//     scanf("%d %d", &broj, &stepn);
//     printf("\n%d", stepenovanje(broj, stepn));
//     return 0;
// }

// 9.31

// int sabiranje(int broj) {
//     if(broj == 1) return 1;
//     return broj + sabiranje(broj - 1);
// }

// int main() {
//     int n;
//     printf("unesite broj: ");
//     scanf("%d", &n);
//     printf("%d", sabiranje(n));
//     return 0;
// }

// 9.32

// int ispis(int n) {
//     if(n == 0) return 0;
//     printf("%d ", n);
//     return ispis(n -1);
// }

// int main() {
//     int x;
//     printf("Unesite broj");
//     scanf("%d", &x);
//     ispis(x);
//     return 0;

// }

// 9.34

// int saberiCifre(int n) {
//     if(n < 10) return n;
//     return n % 10 + saberiCifre(n / 10);
// }

// int main() {
//     int x;
//     printf("Unesite broj: ");
//     scanf("%d", &x);
//     printf("%d", saberiCifre(x));
//     return 0;
// }

// 10.4

// int main() {
//     int n, i;
//     printf("Unesite broj elementa u nizu: ");
//     scanf("%d", &n); 
//     int niz[n - 1];
//     for(i = 1; i <= n; i++) {
//         printf("\nElement %d:", i);
//         scanf("%d", &niz[i - 1]);
//     }
//     for(i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
//     return 0;
// }

// 10.5

// #define MAX 100

// int main() {
// int n, niz[MAX];

// printf("Unesite broj elementa: ");
// scanf("%d", &n);
// for(int i = 0; i < n; i++) {
//     printf("unesite element %d: ", i + 1);
//     scanf("%d", &niz[i]);
// }

// printf("Obrnuto: ");
// for(int i = n - 1; i >= 0; i--) {
//     printf("%d ", niz[i]);
// }

// return 0;
// }

// 10.7

// int main() {
//     int n, niz[MAX], suma = 0;
//     float as;
//     printf("Ispisite broj elemenata: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }
//     printf("Elementi niza: ");

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//         suma += niz[i];
//     }
//     as = (float)suma / n;
//     printf("\n Aritmeticka sredina: %f", as);

// 10.8

// int deljivi = 0;

// for(int i = 0; i < n; i++) {
//     if(niz[i] % 3 == 0) {
//         suma += niz[i];
//         deljivi++;
//     }
// }

// printf("\nAritmeticka sredina je: %f", (float)suma / deljivi);

// 10.9 a

// int sumaParni = 0, sumaNeparni = 0;

// for(int i = 0; i < n; i++) {
//     if(niz[i] % 2 == 0)  sumaParni += niz[i];
//      else sumaNeparni += niz[i];
// }

// printf("\nSuma parnih je %d", sumaParni);
// printf("\nSuma neparni je %d", sumaNeparni);

//10.9 b

// int sumaParni = 0, sumaNeparni =0;

// for(int i = 0; i < n; i++) {
//     if(i % 2 == 0) sumaParni += niz[i];
//     else sumaNeparni += niz[i];
// }

// printf("\nSuma elemenata sa parnim indeskom je %d", sumaParni);
// printf("\nSuma elemenata sa neparnim indeskom je %d", sumaNeparni);

//     return 0;
// }

// 10.10

// #define MAX 100

// int main() {
// float niz1[MAX], niz2[MAX];
// int n;
// float suma = 0;

// printf("Unesite broj elemenata niza: ");
// scanf("%d", &n);

// for(int i = 0; i < n; i++) {
//     scanf("%f", &niz1[i]);
// }

// printf("Drugi niz: ");

// for(int i = 0; i < n; i++) {
//     scanf("%f", &niz2[i]);
// }

// for(int i = 0; i < n; i++) {
//     suma += niz1[i] * niz2[i];
// }

// printf("Skalarni proizvod je %f", suma);

// return 0;

// }

// 10.12

    // int main() {
    //     int nizA[MAX], nizB[MAX], nizC[MAX];
    //     int n, m;

    //     printf("Unesite broj elemenata prvog niza: ");
    //     scanf("%d", &n);
    //     for(int i = 0; i < n; i++ ) {
    //         printf("Unesite element: ");
    //         scanf("%d", &nizA[i]);
    //     }

    //     printf("Unesite broj elemenata drugog niza: ");
    //     scanf("%d", &m);
    //     for(int i = 0; i < m; i++ ) {
    //         printf("Unesite element: ");
    //         scanf("%d", &nizB[i]);
    //     }

    //     int x = 0;

    //     for(int i = 0; i < n; i++) {
    //         nizC[x] = nizA[i];
    //         x++;
    //     }

    //     for(int i = 0; i < m; i++) {
    //         nizC[x] = nizB[i];
    //         x++;
    //     }

    //     printf("Elementi niza C: ");

    //     for(int i = 0; i < n + m; i++) {
    //         printf("%d", nizC[i]);
    //     }

    //     return 0;
    // }

    // 10.12

    // void napraviNiz(int brojElemenata, int *niz) {
    //     for(int i = 0; i < brojElemenata; i++) {
    //         printf("Unesite element: ");
    //         scanf("%d", &niz[i]);
    //     }
    // }

    // int main() {

    //     int nizA[MAX], nizB[MAX], n;
    //     int nizC[MAX];
    //     printf("Unesite broj elemenata niza:");
    //     scanf("%d", &n);

    //     printf("Prvi niz: ");
    //     napraviNiz(n, nizA);
    //     printf("Drugi niz: ");
    //     napraviNiz(n, nizB);

    //     // for(int i = 0; i < n; i++) {
    //     //     printf("%d", nizA[i]);
    //     // }

    //     for(int i = 0; i < n; i++) {
    //         nizC[i] = nizA[i] + nizB[i];
    //         printf("%d", nizC[i]);
    //     }

    //     return 0;
    // }

    // 10.13

    // void napraviNiz(int brojEl, int *niz) {
    //     for(int i = 0; i < brojEl; i++) {
    //         printf("unesite element %d", i + 1);
    //         scanf("%d", &niz[i]);
    //     }
    // }

    // int main() {
    //     int nizA[MAX], nizB[MAX];
    //     double nizC[MAX];
    //     int n;

    //     printf("unesite broj elemenata: ");
    //     scanf("%d", &n);

    //     napraviNiz(n, nizA);
    //     napraviNiz(n, nizB);

    //     for(int i = 0; i < n; i++) {
    //         nizC[i] = (double)(pow(nizA[i], 3) / 3) + 2 * nizA[i] * nizB[i];
    //         printf("%f", nizC[i]);
    //     }
    // }

    // 10.14

    // void napraviNiz(int brEl, int *niz) {
    //     for(int i = 0; i < brEl; i++) {
    //         scanf("%d", &niz[i]);
    //     }
    // }

    // int main() {
    //     int nizA[MAX], nizB[MAX], nizC[MAX], n = 5;
        
    //     printf("Elementi niza A: ");
    //     napraviNiz(n, nizA);
    //     printf("Elementi niza B: ");
    //     napraviNiz(n, nizB);

    //     for(int i = 0, j = n -1; i < n; i++, j--) {
    //         nizC[i] = nizA[i] + nizB[j];
    //         printf("%d ", nizC[i]);
    //     }
    // }

// 10.15
// #define MAX 100

// int main() {
//     int niza[MAX], nizb[MAX], nizc[MAX], n, m, index = 0;
//     printf("Duzina prvog niza: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niza[i]);
//     }
//     printf("Duzina drugog niza: ");
//     scanf("%d", &m);
//     for(int i = 0; i < m; i++) {
//         scanf("%d", &nizb[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         if(niza[i] % 2 == 0) {
//             nizc[index] = niza[i];
//             index++;
//         }
//     }
//     for(int i = 0; i < m; i++) {
//         if(nizb[i] % 2 == 0) {
//             nizc[index] = nizb[i];
//             index++;
//         }
//     }

//     printf("Elementi niza su: ");
//     for(int i = 0; i < index; i++) {
//         printf("%d ", nizc[i]);
//     }

//     return 0;
// }

// 10.16

// #define MAX 100
// int main() {
//     int a[MAX], b[MAX], c[MAX], n, bIndex = 0, cIndex = 0;
//     printf("Unesite broj elementa");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("\nUnesite element %d: ", i+1);
//         scanf("%d", &a[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         if(a[i] < 0) {
//             b[bIndex] = a[i];
//             bIndex++;
//         } else {
//             c[cIndex] = a[i];
//             cIndex++;
//         }
//     }

//     printf("\n Elementi B: ");
//     for(int i=0; i<bIndex; i++)
//     printf ("%d ", b[i]);
//     printf("\n Elementi C: ");
//     for(int i=0; i<cIndex; i++)
//     printf ("%d ", c[i]);
    

// return 0;
// }

// 10.17

// int main() {
//     int nizA[MAX], nizB[MAX], nizC[MAX];
//     int n;

//     printf("Koliko elemenata niza A: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &nizA[i]);
//     }

//     int negativni = 0, pozitivni = 0;

//     for(int i = 0; i < n; i++) {

//         if(nizA[i] < 0) {
//             nizB[negativni] = nizA[i];
//             negativni++;
//         } else {
//             nizC[pozitivni] = nizA[i];
//             pozitivni++;
//         }
//     }

//     printf("Niz B: ");
//     for(int i = 0 ; i < negativni; i++) {
//         printf("%d", nizB[i]);
//     }

//     printf("Niz C: ");
    
//     for(int i = 0; i < pozitivni; i++) {
//         printf("%d ", nizC[i]);
//     }
// }

// 10.18

// #define MAX 100

// int main() {

//     float a[MAX], b[MAX], as, suma = 0;
//     int n, bIndex = 0;
//     printf("Unesite broj elementa: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("\nUnesite element %d: ", i+1);
//         scanf("%f", &a[i]);
//         suma += a[i];
//     }

//     as = suma / n;

//     for(int i = 0; i < n; i++) {
//         if(a[i] > as) {
//             b[bIndex] = a[i];
//             bIndex++;
//         }
//     }

//         for(int i = 0; i < bIndex; i++) {
//             printf("%f ", b[i]);
//     }

// }

// 10.19

// #define MAX 100

// int main() {

//     int a[MAX], b[MAX], n, suma = 0;

//     printf("Unesite broj elementa: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("\nUnesite element %d: ", i+1);
//         scanf("%d", &a[i]);
//     }

//     printf("Elementi niza b su: ");

//     for(int i = 0; i < n; i++) {
//         suma += a[i];
//         b[i] = suma;
//         printf("\n%d ", b[i]);
//     }

//     return 0;
// }

// 10.21

// #define MAX 100

// int skalarni(float niz1[], float niz2[], int n) {
//     float skalar = 0;
//     for(int i = 0; i < n; i++) {
//         skalar += niz1[i] * niz2[i];
//     }
    
//     return skalar;
// }

// int main() {
//     int n;
//     float nizA[MAX], nizB[MAX], skalar;
//     printf("Unesite broj n: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%f", &nizA[i]);
//     }
//     printf("\n Drugi niz: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%f", &nizB[i]);
//     }

//     skalar = skalarni(nizA, nizB, n);

//     printf("\nSkalar je %f", skalar);


//     return 0;
// }

// 10.22

// #define MAX 100

// int brojElementa(int niz[], int n) {
//     int noviNiz[MAX];
//     int index = 0;
//     int duplikati;

//     for(int i = 0; i < n; i++) {
//         duplikati = 0;
//         for(int x = 0; x <= index; x++) {
        

//         if(niz[i] == noviNiz[x]) {
//             duplikati++;
//             break;
//         }
//         }
//         if(duplikati > 0) continue;
//             noviNiz[index] = niz[i];
//             index++;
//     }

//     return index;

// }

// int main() {
//     int n;
//     int niz[MAX];
//     printf("Unesite broj elementa u nizu: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }
//     printf("Broj razlicitih elementa: %d", brojElementa(niz, n));
//     return 0;
// }

// 10.23

// #define MAX 100

// float prosecnaOcena(int niz[], int brojUcenika) {
//     int sumaOcena = 0;
//     float prosekOcena;

//     for(int i = 0; i < brojUcenika; i++) {
//         sumaOcena += niz[i];
//     }
//     prosekOcena = (float)sumaOcena / brojUcenika;
//     return prosekOcena;
// }

// float prosecnPolozili(int niz[], int brojUcenika) {
//     int brojPolozili = 0, suma = 0;

//     for(int i = 0; i < brojUcenika; i++) {
//         if(niz[i] > 5) {
//             suma += niz[i];
//             brojPolozili++;
//         }
//     }

//     return (float)suma / brojPolozili;
// }

// int polozili(int niz[], int brojUcenika) {
//     int polozili = 0;
//        for(int i = 0; i < brojUcenika; i++) {
//         if(niz[i] > 5) polozili++;
//     }
//     return polozili;
// }

// int nisuPolozili(int niz[], int brojUcenika) {
//     int nisuPolozili = 0;
//        for(int i = 0; i < brojUcenika; i++) {
//         if(niz[i] <= 5) nisuPolozili++;
//     }
//     return nisuPolozili;
// }

// int veceOdProseka(int niz[], int brojUcenika) {
//     int broj = 0;
//     float prosek = prosecnaOcena(niz, brojUcenika);
//     for(int i = 0; i < brojUcenika; i++) {
//         if(niz[i] > prosek) broj++;
//     }

//     return broj;

// }

// int main() {
//     int ucenici, ocene[MAX];
//     printf("Unesite broj ucenika");
//     scanf("%d", &ucenici);
//     for(int i = 0; i < ucenici; i++) {
//         printf("\nOcena ucenika %d: ", i + 1);
//         scanf("%d", &ocene[i]);   
//     }

//     printf("\n Prosecna ocena je %f", prosecnaOcena(ocene, ucenici));
//     printf("\n Prosecna ocena ucenika koji su polozili je %f", prosecnPolozili(ocene, ucenici));
//     printf("\n Broj ucenika koji su polozili ispit: %d", polozili(ocene, ucenici));
//     printf("\n Broj ucenika koji nisu polozili ispit je %d", nisuPolozili(ocene, ucenici));
//     printf("\n Broj ucenika koji imaju vecu ocenu od prosecne %d", veceOdProseka(ocene, ucenici));

//     return 0;
// }

// 10.24

// #define MAX 100

// void fibonaci(int niz[], int n) {
//    int i;
//    for(i=0; i<n; i++) {
//     if(i<2) niz[i]=1;
//     else niz[i]=niz[i-1]+niz[i-2];
//     }
// }

// void ispis(int niz[], int n) {

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
// }

// int main() {
//     int n, niz[MAX];
//     printf("Broj clanova niza: ");
//     scanf("%d", &n);
//     fibonaci(niz, n);
//     ispis(niz, n);
// }

// 10.25

// float skalarniProizvod(const float a[], const float b[], int n) {

//     return (n > 0) ? a[0] * b[0] + skalarniProizvod(a + 1, b + 1, n - 1) : 0;

// }

// int main() {
//     float a[MAX], b[MAX]; 
//     int n;
//     printf("Duzina nizova: ");
//     scanf("%d", &n);

//     printf("Elementi niza A: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%f", &a[i]);
//     }

//     printf("\nElementi niza B: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%f", &b[i]);
//     }

//     printf("\n A*B = %f", skalarniProizvod(a, b, n));
    
// }

// 10.26 <3

// int main() {
//     int niz[MAX];

//     int n;

//     printf("Unesit broj permutacija: ");
//     scanf("%d", &n);
    
//     for(int i = 0; i < n; i++) {



//     }
// }

// 10.27

// int main() {
//     int n, niz[MAX];
//     printf("Unesite broj ellementa u nizu: ");
//     scanf("%d", &n);

//     printf("Unesite elemente: ");

//     int najveci = 0;
//     int pozicija;

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//         if(niz[i] > najveci) {
//             najveci = niz[i];
//             pozicija = i + 1;
//         }
//     }

//     printf("Najveci element u nizu je: %d a pozicija je %d", najveci, pozicija);

// }

//10.28

// int main() {
//     float niz[MAX];
//     int n;

//      printf("Unesite broj ellementa u nizu: ");
//     scanf("%d", &n);

//     printf("Unesite elemente: ");

//     float najveci, najmanji;

//     for(int i = 0; i < n; i++) {
//         scanf("%f", &niz[i]);
//         if(i == 0) {
//             najveci = niz[i];
//             najmanji = niz[i] ;
//         }

//         if(niz[i] > najveci) {
//             najveci = niz[i];
//         }
//         if(niz[i] < najmanji) {
//             najmanji = niz[i];
//         }
//     }

//     printf("Brojevi su: \n");

//     for(int i = 0; i < n; i++) {
//         if(niz[i] < najveci / 2 && niz[i] > najmanji * 2) printf("%.2f ", niz[i]);
//     }
// }

// 10.29

// int main() {
//     int n, nizA[MAX];

//     printf("Unesite broj elemenata: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++){
//         printf("Unesite element: \n");
//         scanf("%d", &nizA[i]);
//     }

//     int najmanji;

//     for(int i = 0; i < n; i++) {
//         if(nizA[i] % 2 == 0) {
//             najmanji = nizA[i];
//             break;
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         if(nizA[i] % 2 == 0) {
//             if(nizA[i] < najmanji) najmanji = nizA[i];
//         }
//     }

//     printf("Najmanji element je %d", najmanji);
// }

// 10.30

// int main() {
//     int n, nizA[MAX];
//     printf("Unesitre broj elemenata: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Unesite element %d", i + 1);
//         scanf("%d", &nizA[i]);
//     }

//     int maksimalna = nizA[0];

//     for(int i = 1; i < n; i = i + 2 ) {
//         if(nizA[i] > maksimalna ) maksimalna = nizA[i];
//     }

//     printf("ELement maksimalna vrednost jeste: %d", maksimalna);

// }

// 10.31

// int main() {

//     int niz[MAX], n;
//     printf("Broj elemenata niza: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Element: \n");
//         scanf("%d", &niz[i]);
//     }

//     for(int i = 2; i < n; i++) {
//         if(niz[i] != niz[i - 1] + niz[i - 2]) {
//             printf("Niz nije Fibonacijev! ");
//             break;
//         } 

//         if(i + 1 == n) {
//         printf("Jeste finbonacijev");
//         }
//     }
// }

// 10.32

// int main() {
//     int n, trazeniElement, niz[MAX];
//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);
//     printf("Unesite elemente niza: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     } 
//     printf("Unesite trazeni element");
//     scanf("%d", &trazeniElement);

//     for(int i = 0; i < n; i++) {
//         if(niz[i] == trazeniElement) {
//             printf("Index trazenog elementa je %d", i);
//             return 0;
//         }
//     }

//     printf("Trazeni element nije naden");
//     return 1;
// }

// 10.33

// int main() {
//     int niz[MAX], n, trazeni;

//     printf("Unesite broj elementa: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     printf("Trazeni element: ");
//     scanf("%d", &trazeni);

//     for(int i = 0; i < n; i++) {
//         if(niz[i] == trazeni) {
//             printf("Pozicija trazenog elementa je %d", i);
//             break;
//         }
    
//     if(i + 1 == n) {
//         printf("Trazeeni element ne postoji");
//     }

//     }

// }

// 10.34

// int main() {
//     int niz[MAX], nizB[MAX], n;

//     printf("Broj elemenata niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         printf("Element \n");
//         scanf("%d", &niz[i]);
//     }

//     for(int i = n - 1, j = 0; i >= 0; i--, j++) {
//         nizB[j] = niz[i];
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d \n", nizB[i]);
//     }
// }


// 10.35

// int main() {
//     int n, niz[MAX];
//     printf("unesite duzinu niza: ");
//     scanf("%d", &n);
//     printf("Unesite elemente niza: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     int pomocni;

//     for(int i = 0; i < n; i++) {

//         if(i == 0) {
//             pomocni = niz[i];
//         } else {

//             niz[i - 1] = niz[i];
//         }
//     }
//     niz[n - 1] = pomocni;

//     printf("\n Elementi: ");

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
// }

// 10.36

// 123456
// 345612
// 6 - duzina 2 - pomeraj
// 2 u levo a ako je manje od dva onda za 6 - 2 u desno

// int main() {

//     int niz[MAX], noviNiz[MAX], x, n;
//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         printf("Element: ");
//         scanf("%d", &niz[i]);
//     }
    
//     printf("Unesite broj: ");
//     scanf("%d", &x);

//     for(int i = 0; i < n; i++ ){
//         if(i < x) {
//             noviNiz[i + (n - x)] = niz[i];
        
//         } else if (i >= x) {
//             noviNiz[i - x] = niz[i];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d ", noviNiz[i]);
//     }

// }

// 10.37

// int main() {
//     int duzina, niz[MAX], noviNiz[MAX];

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &duzina);

//     for(int i = 0; i < duzina ; i++) {
//         scanf("%d", &niz[i]);
//     }

//     for(int i = 0; i < duzina; i++) {
//         if(i % 2 == 0 ) {
//             noviNiz[i] = niz[i + 1];
//         } else {
//             noviNiz[i] = niz[i - 1];
//         }
//     }

//     for(int i = 0; i < duzina; i++) {
//         printf("%d ", noviNiz[i]);
//     }
// }

// 10.38 

// int main() {
//     int n, niz[MAX];
//     printf("unesite duzinu niza: ");
//     scanf("%d", &n);
//     printf("Unesite elemente niza: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }
    
//     int noviNiz[n], brojEl = 1, postoji;
//     noviNiz[0] = niz[0];

//     for(int i = 1; i < n; i++ ) {
//         postoji = 0;

//         for(int j = 0; j < brojEl; j++) {
//             if(niz[i] == noviNiz[j]) {
//                 postoji = 1;
//                 break;
//             }
//         }
//         if(postoji) continue;

//         noviNiz[brojEl] = niz[i];
//         brojEl++;
//     }

//     printf("\nNovi niz: \n");
//     for(int i = 0; i < brojEl; i++) {
//         printf("%d ", noviNiz[i]);
//     }
// }

// 10.39
// Selection Sort - metoda izbora

// int main() {

//     int n, niz[MAX];

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     int temp;

//     for(int i = 0; i < n - 1; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(niz[i] > niz[j])  {
//                 temp = niz[i];
//                 niz[i] = niz[j];
//                 niz[j] = temp;
//             }
//         }
//     }

//     printf("Sortirani niz: \n");

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
// }

// 10.41

// int main() {
//     int n, niz[MAX];

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     int pomocna;

//     int sortiran = 0;


//    while(sortiran == 0) {

//     int broj = 0;

//     for(int i = 0; i < n; i++) {
//         if(niz[i + 1] < niz[i]) {
//             pomocna = niz[i];
//             niz[i] = niz[i + 1];
//             niz[i + 1] = pomocna;
//             broj++;
//         }
      
//     }
//       if(broj == 0) {
//             sortiran = 1;
//         }
//    }

//    for(int i = 0; i < n; i++) {
//     printf("%d ", niz[i]);
//    }
// }

// 10.41 
// Bubble Sort - Metod mehurica

// int main() {
//     int n, niz[MAX], pom;
//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     for(int i = n - 1; i > 0; i--) {
//         for(int j = 0; j < i; j++) {
//             if(niz[j] > niz[j + 1]) {
//                 pom = niz[j];
//                 niz[j] = niz[j + 1];
//                 niz[j + 1] = pom;
//             }
//         }
//     }

//     printf("Sortirani niz: \n");

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
// }


// 10.42

// int main() {
//     int uredenNiz[MAX], noviEl, n;
//     printf("Unesite broj elementa: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &uredenNiz[i]);
//     }

//     printf("Novi element: ");
//     scanf("%d", &noviEl);

//     int index, pomocna = uredenNiz[n-1];

//     for(int i = 0; i < n; i++) {
//         if(uredenNiz[i] <= noviEl && uredenNiz[i + 1] >= noviEl) {
//             index = i + 1;

//             for(int j = n - 1; j > i; j--) {
//                 uredenNiz[j + 1] = pomocna;
//                 pomocna = uredenNiz[j - 1];
//             }
//             uredenNiz[index] = noviEl;
//             break;
//         }
//     }

//     for(int i = 0; i < n + 1; i++) {
//         printf("%d ", uredenNiz[i]);
//     }
// }   

// 10.43

// int main() {
//     int prviNiz[MAX], n1, drugiNiz[MAX], n2, treciNiz[MAX], index = 0;

//     printf("Unesite broj elementa prvog niza: ");
//     scanf("%d", &n1);
//     printf("Elementi: ");
//     for(int i = 0; i < n1; i++) {
//         scanf("%d", &prviNiz[i]);
//     }

//     printf("Unesite broj elementa drugog niza: ");
//     scanf("%d", &n2);
//     printf("Elementi: ");
//     for(int i = 0; i < n2; i++) {
//         scanf("%d", &drugiNiz[i]);
//     }

//     int i, j;

//     for(i = 0, j = 0; i < n1 || j < n2; index++) {
//         if(prviNiz[i] < drugiNiz[j]) {
//             treciNiz[index] = prviNiz[i];
//             i++;
//         } else {
//             treciNiz[index] = drugiNiz[j]; 
//             j++;
//         }
//     }

//     if(i < n1) {
//         for(int x = i; x < n1; x++) {
//             treciNiz[index] = prviNiz[x];
//             index++;
//         }
//     }

//     if(j < n2) {
//         for(int x = j; x < n2; x++) {
//             treciNiz[index] = drugiNiz[x];
//             index++;
//         }
//     }

//     printf("Elementi: ");

//     for(i = 0; i < index; i++) {
//         printf("%d ", treciNiz[i]);
//     }
// }
//

// 10.44

// int main() {
//     int n, niz[MAX], pom;

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     for(int i = n - 1; i > 0 ; i--) {
//         for(int j = 0; j < i; j++) {
//             if(niz[j] > niz[j + 1]) {
//                 pom = niz[j];
//                 niz[j] = niz[j + 1];
//                 niz[j + 1] = pom;
//             }
//         }
//     }

//     int brojPonavljanja = 0, target;

//     for(int i = 0; i < n; i++) {
//         if(niz[i] == niz[i + 1]) {
//             int ponavljanja = 0;
//             int broj = niz[i];
//             for(int j = i; niz[j] == niz[i]; i++) {
//                 ponavljanja++;
//             }
//             if (ponavljanja > brojPonavljanja) {
//                 brojPonavljanja = ponavljanja;
//                 target = broj;
//             }
//         }
//     }

//     printf("Trazeni broj je %d i ponavlja se %d puta", target, brojPonavljanja);
// }


// 10.45

// int main() {
//     int n, niz[MAX], zbir;

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//     }

//     printf("Vrednost zbira dva elementa: ");
//     scanf("%d", &zbir);

//     for(int i = 0; i < n ; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(niz[i] + niz[j] == zbir) {
//                 printf("Elemnti su %d i %d \n", niz[i], niz[j]);
//                 break;
//             }
//         }
//     }
// }

// 11.5

// int main() {
//     int matrica[MAX][MAX], n, sumaGlavnaDijagonala = 0, sporednaDi = 0;

//     printf("Unesite duzinu redova i kolona: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     printf("Elementi glavne dijagonale: ");

//     for(int i = 0; i < n; i++) {
//         printf("%d ", matrica[i][i]);
//         sumaGlavnaDijagonala += matrica[i][i];
//     }

//     printf("Elementi sporedne dijagonele: ");

//     for(int i = 0, j = n -1; i < n; i++, j--) {
//         printf("%d ", matrica[i][j]);
//         sporednaDi += matrica[i][j];
//     }

//     printf("\nSuma elemenata glavne dijagonele je %d", sumaGlavnaDijagonala);
//     printf("\nSuma elemenata sporedne dijgaonale je %d", sporednaDi);
// }

// 11.6

// int main() {
//     int matrica[MAX][MAX], n;

//     printf("Unesite broj kolona i vrsta: ");
//     scanf("%d", &n);
    
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &matrica[i][j]);
//         }

//     }

//     for(int i = 0; i < n; i++) {
//         int suma = 0;
//         for(int j = 0; j < n; j++) {
//             suma += matrica[i][j];
//         }
//         printf("Suma %d kolone je %d \n", i + 1, suma);
//     }
// }

// 11.7

// int main() {

//     int matrica[MAX][MAX], n, m, brVrsta;

//     printf("Koliko vrsta: ");
//     scanf("%d", &n);
//     printf("Koliko kolona: ");
//     scanf("%d", &m);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     printf("Unesite broj vrste: ");
//     scanf("%d", &brVrsta);
//     int suma = 0;

//     for(int i = 0; i < m; i++ ) {
//         suma += matrica[brVrsta - 1][i];
//     }

//     printf("Suma je %d", suma);
    
// }


// 11.8

//00 10 20 30 
//31 21 11 01  
//02 12 22 32
//33 23 13 03

// int main() {
//     int matrica[MAX][MAX], m, n;

//     printf("Unesite broj kolona: ");
//     scanf("%d", &m);
//     printf("Unesite broj redova: ");
//     scanf("%d", &n);

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         if(i % 2 == 0) {
//         for(int j = 0; j < m; j++) {
//             printf("%d ", matrica[j][i]);
//         }
//         } else {
//             for(int j = m - 1; j >= 0; j--) {
//                 printf("%d ", matrica[j][i]);
//             }
//         }
//     }
// }

// 11.9

// int main() {
//     float matrica[MAX][MAX];
//     int redovi, kolone;

//     printf("Unesite broj kolona: ");
//     scanf("%d", &kolone);
//     printf("Unesite broj redova: ");
//     scanf("%d", &redovi);

//     for(int i = 0; i < kolone; i++) {
//         for(int j = 0; j < redovi; j++) {
//             scanf("%f", &matrica[i][j]);
//         }
//     }

//     float novaMatrica[kolone][redovi];
//     float dijagonalni;

//     for(int i = 0; i < kolone; i++) {
//         dijagonalni = matrica[i][i];
//         for(int j = 0; j < redovi; j++) {
//             if(dijagonalni == 0) {
//                 if(j ==i) {
//                     novaMatrica[i][j] = 1;
//                 } else {
//                 novaMatrica[i][j] = 0;
//                 }
//             } else {
//             novaMatrica[i][j] = matrica[i][j] / dijagonalni;
//             }
//         }
//     }

//     for(int i = 0; i < kolone; i++) {
//         for (int j = 0; j < redovi; j++) {
//             printf("%.2f ", novaMatrica[i][j]);
//         }
//         printf("\n");
//     }
// }

// 11.10

// int main() {
//     int matrica[MAX][MAX], kolone, novaMatrica[MAX][MAX], x;

//     printf("Unesite broj kolona: ");
//     scanf("%d", &kolone);

//         for(int i = 0; i < kolone; i++) {
//             for(int j = 0; j < kolone; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     printf("Vrednost x: ");
//     scanf("%d", &x);

//     for(int i = 0; i < kolone; i++) {
//         for(int j = 0; j < kolone; j++) {
//             if(i == j) {
//                 novaMatrica[i][j] = matrica[i][j];
//             }
//             if(j < i) novaMatrica[i][j] = matrica[i][j] + x;
//             if(j > i) novaMatrica[i][j] = matrica[i][j] + 2 * x;
//         }
//     }

//     for(int i = 0; i < kolone; i++) {
//         for (int j = 0; j < kolone; j++)
//         {
//             printf("%d ", novaMatrica[i][j]);

//         }

//         printf("\n");
        
//     }
// }

// 11.11

// int main() {
//     int matrica[MAX][MAX], kolone, vrste, x, y;

//     printf("Unesite broj kolona: ");
//     scanf("%d", &kolone);
//     printf("Unesite broj vrsta: ");
//     scanf("%d", &vrste);

//         for(int i = 0; i < vrste; i++) {
//             for(int j = 0; j < kolone; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     printf("Unesite brojeve kolona koje zelite da zamenite: ");
//     scanf("%d %d", &x, &y);

//     int pomocna;

//     for(int i = 0; i < vrste; i++) {
//         pomocna = matrica[i][x - 1];
//         matrica[i][x - 1] = matrica[i][y - 1];
//         matrica[i][y - 1] = pomocna;
//     }

// for(int i = 0; i < vrste; i++) {
//     for(int j = 0; j < kolone; j++) {
//         printf("%d ", matrica[i][j]);  
//     }
//     printf("\n");
// }

// }

// 11.12

// int main() {
//     int n, m , matrica[MAX][MAX], transponovana[MAX][MAX];

//     printf("Broj kolona: ");
//     scanf("%d", &n);
//     printf("Broj vrsta: ");
//     scanf("%d", &m);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             transponovana[j][i] = matrica[i][j];
//         }
//     }

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++ ) {
//             printf("%d ", transponovana[i][j]);
//         }
//         printf("\n");
//     }

// }

// 11.13

// void ispisiNiz(int n, int *niz) {

//     for(int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }

//     printf("\n");
// }


// int main() {
//     int n, matrica[MAX][MAX];
//     int najveciKolNiz[MAX], najmanjiKolNiz[MAX], najveciVrNiz[MAX], najmanjiVrNiz[MAX];
//     int najveciKolona, najmanjiKolona, najveciVrsta, najmanjaVrsta;

//     printf("Broj kolona i vrsta: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &matrica[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++) {

//          najveciKolona = matrica[0][i];
//          najmanjiKolona = matrica[0][i];
//          najveciVrsta = matrica[i][0];
//          najmanjaVrsta = matrica[i][0];
      
//         for(int j = 0; j < n; j++) {
//             if(matrica[i][j] > najveciVrsta) najveciVrsta = matrica[i][j];
//             if(matrica[i][j] < najmanjaVrsta) najmanjaVrsta = matrica[i][j];
//             if(matrica[j][i] > najveciKolona) najveciKolona = matrica[j][i];
//             if(matrica[j][i] < najmanjiKolona) najmanjiKolona = matrica[j][i];
//         }

//         najveciKolNiz[i] = najveciKolona;
//         najmanjiKolNiz[i] = najmanjiKolona;
//         najveciVrNiz[i] = najveciVrsta;
//         najmanjiVrNiz[i] = najmanjaVrsta;

//     }

//         printf("Najveci u vrstama: \n");
//         ispisiNiz(n, najveciVrNiz);
//         printf("Najmanji u vrstama: \n");
//         ispisiNiz(n, najmanjiVrNiz);
//         printf("Najveci u kolonama: \n");
//         ispisiNiz(n, najveciKolNiz);
//         printf("Najmanji u kolonama: \n");
//         ispisiNiz(n, najmanjiKolNiz);
        
//         return 0;
// }

// 11.14

// int main() {
//     int n, m, k, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

//     printf("Unesite broj vrsta prve matrice: ");
//     scanf("%d", &n);
//     printf("Unesite broj kolona prve matrice: ");
//     scanf("%d", &m);

//     printf("Unesite broj kolona druge matrice: ");
//     scanf("%d", &k);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%d", A[i][j]);
//         }
//     }
    
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < k; j++) {
//             scanf("%d", B[i][j]);
//         }
//     }
// }

//............................


// int main() {
//     char niz[] = {'a', 'b', 'c', 'd', 'e', '\0'};

//     int i = 0;
//     while(niz[i] != '\0') {  
//         putchar(niz[i]);
//         i++;
//     }

//     printf("%s ", niz);

//     char noviNiz[] = "neka rec";
//         i = 0;

//     while(niz[i] != '\0') {
//         putchar(noviNiz[i]);
//         i++;
//     }

//     printf("%s", noviNiz);

// }

// int main() {
    // char string[MAX];
    // printf("Unesite tekst: ");
    // scanf("%s", string);
    // printf("\n%s", string);

    // char drugiString[MAX];
    // printf("\nUnesite tekst: ");
    // gets(drugiString);
    // printf("%s", drugiString);

    // char string[MAX];
    // printf("Unesite tekst: ");
    // gets(string);
    // puts(string);

    // char string[MAX];
    // puts("Unesite string");
    // gets(string);
    // printf("%s", string);

// }

// int main() {
//  char *string[] = {"Operatori", "Ciklusi", "Skokovi", "Karakteri", "Nizovi",
// "Matrice", "Stringovi", "Pokazivaci", "Strukture", "Datoteke"};

// int n;
// puts("Upisite poglavlje: ");
// scanf("%d", &n);

// puts(string[n - 1]);

// }

// int main() {
//     char str[] = {'a', 'b' , 'c'};
//     int brElem = sizeof(str);
//     printf("%d", brElem);

   
// }

// 1.8

// int main() {
    // char string[MAX];
    // printf("Unesite string: ");
    // gets(string);

    // int i;

    // for(i = 0; string[i] != '\0';){
    //     i++;
    // }

    // printf("%d", i);

//     char string[MAX];
//     printf("Unesite string: ");
//     gets(string);
//     int n = strlen(string);
//     printf("%d", n);   
// }

// int main() {
//     char s1[MAX], s2[MAX];
//     printf("Prvi string: ");
//     gets(s1);
//     printf("Drugi string: ");
//     gets(s2);

//     // if(strcmp(s1, s2) == 0) printf("Stringovi su jednaki");
//     // else if(strcmp(s1, s2) > 0) printf("Prvi string je veci od drugog ");
//     // else printf("Drugi string je veci od prvog");

//     if(strncmp(s1, s2, 3) == 0) printf("Prva 3 slova su ista");
//     else printf("Nisu ista");
// }

// int main() {
//     char prvi[MAX], drugi[MAX];

//     printf("unesite prvi string: ");
//     gets(prvi);
//     printf("Unesite drugi string: ");
//     gets(drugi);

//     printf("Novi string: ");
//     strcpy(prvi, drugi);
//     printf("%s", prvi);
//     }

//................................

// 1.4

// int main() {
//     char s[MAX];
//     printf("Unesite recenicu: ");
//     gets(s);    
//     puts(s);
//     return 0;
// }

// 1.5

// int main() {
//     char ime[] = "Dalila";
//     char prezime[MAX];
//     puts("Unesite svoje prezime: ");
//     gets(prezime);
//     printf("Zdravo %s %s", ime, prezime);
// }

// 1.6

// int main() {
//     char poglavlja[10][100] = {"Operatori", "Ciklusi", "Skokovi", "Karakteri", "Nizovi"
//  "Matrice", "Stringovi", "Pokazivaci", "Strukture", "Datoteke"};
//  int n;

//  printf("Unesite broj poglavlja: ");
//  scanf("%d", &n);

//  printf("Poglavlje broj %d je %s", n, poglavlja[n - 1]);

//  return 0;
// }

// 1.8

// int main() {
//     char s[MAX];
//     printf("unesite string: ");
//     gets(s);

//     int n = 0;
//     while(s[n] != '\0') n++;

//     printf("Duzina stringa je: %d", n);
// }

// 1.8

// int main() {
//     int n;
//     char s[MAX];
//     printf("unesite string: ");
//     gets(s);

//     n = strlen(s);
//     printf("Duzina stringa je %d", n);
// }

// 1.8 

// int main() {
//     char s1[MAX], s2[MAX];
//     printf("Unesite prvi string: ");
//     gets(s1);
//     printf("Unesite drugi string: ");
//     gets(s2);

//     if(strlen(s1) > strlen(s2)) printf("Prvi string je veci od drugog");
//     else if(strlen(s2) > strlen(s1)) printf("Drugi string je veci od prvog");
//     else printf("Stringovi su jednaki");
// }

// 1.9

// int main() {
//     char s1[MAX], s2[MAX];
//     printf("Prvi string: ");
//     gets(s1);
//     printf("Drugi string: ");
//     gets(s2);

//     if(strcmp(s1, s2) == 0) printf("Stringovi su isti: ");
//     else if(strcmp(s1, s2) > 0) printf("Prvi string je veci");
//     else printf("Drugi string je veci");
// }

// 1.9

// int main() {
//     char s1[MAX], s2[MAX];

//     printf("Unesite prvi string: ");
//     gets(s1);
//     printf("Unesite drugi sring: ");
//     gets(s2);

//     if(strncmp(s1, s2, 3) == 0) printf("Prva 3 karaktera od oba stringa su - ista");

// }

// 1.10

// int main() {
//     int s1[MAX], s2[MAX];
//     printf("Unesite prvi string: ");
//     scanf("%s", &s1);
//     strcpy(s2, s1);
//     printf("Drugi: ");
//     puts(s2);
// }

// 1.10

// int main() {
//     int s1[MAX], s2[MAX];
//     printf("Unesite prvi string: ");
//     scanf("%s", &s1);{}
//     strncpy(s2, s1, 3);
//     printf("Novi string: ");{}
//     puts(s2);
// }

//...............................................

// 5.1

// int main() {
//     int br;
//     FILE *dato;
//     dato = fopen("podaci.txt", "w");

//     if(dato == NULL) {
//         printf("Greska prilikom otvaranja datoteke podaci.txt");
//         exit(1);
//     }

//     for(int i = 0; i < 10; i++) {
//         fprintf(dato, "%d ", i);
//     }

//     fclose(dato);

//     dato = fopen("podaci.txt", "r");

//     if(dato == NULL) {
//         printf("Greska prilikom otvaranja datoteke");
//         exit(1);
//     }

//     while(1) {
//         fscanf(dato, "%d", &br);

//         if(feof(dato)) break;

//         printf("Procitano %d ", br);
//     }

//     fclose(dato);

//     return 0;
    
// }

// 5.2

// int main() {

//     FILE *dato;

//     if((dato = fopen("podaci.txt", "a")) == NULL) {
//         printf("Greska prilikom otvaranja datoteke podaci.txt");
//         exit(1);
//     }

//     fprintf(dato, "Pozdrav svima\n");
    
//     fclose(dato);

//     return 0;

// }

// 5.3

// int main() {
//     FILE *dato;

//     int najmanji, najveci, broj;

//     dato = fopen("brojevi.txt", "r");

//     if(dato == NULL) {
//         printf("Doslo je do greske");
//         exit(1);
//     }

//     fscanf(dato, "%d", &broj);
//     najmanji = broj;
//     najveci = broj;

//     while(fscanf(dato, "%d", &broj) != EOF) {
//         if(broj < najmanji) najmanji = broj;
//         if(broj > najveci) najveci = broj;
//     }

//     fclose(dato);

//     printf("Najmanji broj je %d", najmanji);
//     printf("Najveci broj je %d", najveci);

// }

// 5.4

// int main() {
//     FILE *a, *b;

//     a = fopen("PrviBrojevi.txt", "r");

//     if(a == NULL) {
//         printf("...");
//         exit(1);
//     }

//     b = fopen("DrugiBrojevi.txt", "w");

//     if(b == NULL) {
//         printf("...");
//         exit(1);
//     }

//     int broj, i = 1;

//     while(fscanf(a, "%d", &broj) != EOF) {
//         if(i % 2 == 0) fprintf(b, "%d \n", broj);
//         else fprintf(b, "%d \n", broj * 2);

//         i++;
//     }

//     fclose(a);
//     fclose(b);
// }

//....................................................................

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("text.txt", "w");

//     for(int i = 0; i < 10; i++) {
//         fprintf(datoteka, "%d \n", i);
//     }

//     fclose(datoteka);

//     datoteka = fopen("text.txt", "r");

//      if (datoteka == NULL) {
//         printf("Greska \n");
//         exit(1);
//     }

//     int br;

//     while(fscanf(datoteka, "%d", &br) != EOF) {
//         printf("%d \n", br);
//     }

//     return 0;
// }

// int main() {

//     FILE *datoteka;
//     datoteka = fopen("text.txt", "w");

//     fprintf(datoteka, "ovo je string \n");
//     fprintf(datoteka, "ovo je drugi string\n");
    
//     fclose(datoteka);

//     datoteka = fopen("text.txt", "r");

//     char string[MAX];

//     while(fgets(string, MAX, datoteka ) != NULL) {
//         printf("%s\n", string);
//     }

//     fclose(datoteka);
// }

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("text.txt", "w");

//     fputs("Ovo je super", datoteka);

//     fclose(datoteka);

// }

//.....................

// 5.1

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("text.txt", "w");

//     for(int i = 0; i < 10; i++) {
//         fprintf(datoteka, "%d \n", i);
//     }

//     fclose(datoteka);

//     datoteka = fopen("text.txt", "r");

//     int br;

//     while(fscanf(datoteka, "%d", &br ) != EOF) {
//         printf("%d", br);
//     }

//     fclose(datoteka);
// }

// 5.2

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("podaci.txt", "a");

//     fputs("Pozdrav svima!", datoteka);

//     fclose(datoteka);

// }

// 5.3

// int main() {

//     FILE *datoteka;
//     int najmanji, najveci;

//     datoteka = fopen("brojevi.txt", "r");

//     if(datoteka == NULL) {
//         printf("Greska");
//         exit(1);
//     }

//     int br;

//     while(fscanf(datoteka, "%d", &br) != EOF) {
//         if(br > najveci) najveci = br;
//         else if(br < najmanji) najmanji = br;
//     }

//     printf("Najmanji broj je %d\n", najmanji);
//     printf("Najveci broj je %d\n", najveci);

// }

// 5.4

// int main() {

//     FILE *stari, *novi;

//     stari = fopen("BrojeviStari.txt", "r");
//     novi = fopen("BrojeviNovi.txt", "w");

//     int br, i = 1;

//     while(fscanf(stari, "%d", &br) != EOF) {
//         if(i % 2 == 0) fprintf(novi, "%d\n", br);
//         else fprintf(novi, "%d\n", br * 2);
//         i++;
//     }

// }

// 5.5

// int main() {
//     FILE *brojeviX, *brojeviY;

//     brojeviX = fopen("BrojeviX.txt", "r");
//     brojeviY = fopen("BrojeviY.txt", "w");

//     int br, pom;

//     while(fscanf(brojeviX, "%d", &br) != EOF) {
//         pom = br;
//         int cifra;
//         while(pom > 0) {

//             cifra = pom % 10;
//             if(cifra == 3 || cifra == 7) {
//                 fprintf(brojeviY, "%d\n", br);
//                 break;
//             }
//             pom = pom / 10;   
//         }
//     }
// }


// 5.6

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("podaci6.txt", "w");

//     if(datoteka == NULL) {
//         printf("Doslo je do greske: ");
//         exit(1);
//     }

//     fprintf(datoteka, "Ovo je datotka\n");
//     fputs("pozdrav svima!\n", datoteka);
//     fputs("123 + 456 = 579\n", datoteka);
//     fputc('A', datoteka);
//     fprintf(datoteka, "\n");
//     fputs("Kraj datotke", datoteka);

//     fclose(datoteka);

// }

// 5.7

// int main() {
//     FILE *datoteka;
//     datoteka = fopen("podaci7.txt", "r");

//     if(datoteka == NULL) {
//         printf("Doslo je do greske: ");
//         exit(1);
//     }

//     int brRedova = 0;
//     int znak;

//     while(znak = fgetc(datoteka) != EOF) {
//         znak = fgetc(datoteka);        
//         brRedova++;
//     }

//     printf("Broj redova jeste %d", brRedova);

//     fclose(datoteka);
// }

// 5.8 

// int main() {
//     FILE *datoteka;

//     datoteka = fopen("podaci6.txt", "r");

//     char str[20];

//     while(fgets(str, 20, datoteka) != NULL) {
//         // printf("%s\n", str);
//         puts(str); 
//     }

// }

// 5.9

// int main() {
//     FILE *datoteka, *novaDatoteka;

//     datoteka = fopen("podaci6.txt", "r");
//     novaDatoteka = fopen("podaci6Novo.txt", "w");

//     char str[MAX];

//     while(fgets(str, MAX, datoteka) != NULL) {
//         fputs(str, novaDatoteka);
//     }

//     fclose(datoteka);
//     fclose(novaDatoteka);

// }

// 5.10 

// int main() {
//     FILE *datoteka, *datotekaNova;
//     int n;
//     printf("Unesite broj n: ");
//     scanf("%d", &n);

//     datoteka = fopen("podaci6.txt", "r");
//     datotekaNova = fopen("podaci6Novo.txt", "w");

//     char str[MAX];

//     for(int i = 0; i < n; i++) {
//         rewind(datoteka);
//         while(fgets(str, MAX, datoteka) != NULL) {
//             fputs(str, datotekaNova);
//         };
//     }

//     fclose(datoteka);
//     fclose(datotekaNova);
// }

// 5.13

// int main() {

//     FILE *dato;
//     dato = fopen("podaci13.txt","w");
//     if(dato==NULL) {

//     printf("\n Greska pri otvaranju datoteke!");
//     exit(1);
//     }

//     fputs("Pozdrav svima!", dato);
//     fseek(dato, 10, SEEK_SET);
//     fputs("etu", dato);
//     fclose(dato);
//     return 0;
// }

// 5.14

// int main() {
//     int br;
//     FILE *datoteka;
//     datoteka = fopen("podaci14.txt", "w");

//     for(int i = 0; i < 3; i++) {

//         printf("Unesite broj");
//         scanf("%d", &br);

//         fprintf(datoteka, "%d\n", br);

//     }

//     fclose(datoteka);

//     int suma = 0;

//     datoteka = fopen("podaci14.txt", "r");

//     while(fscanf(datoteka, "%d", &br) != EOF) {
//         suma += br;
//         printf("%d\n", br);

//     }

//     printf("Suma brojeva je: %d", suma);
// }

//
