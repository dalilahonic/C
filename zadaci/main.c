// #include <stdio.h>
// #include <math.h>

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

#include <stdio.h>
#include <math.h>
#define PI 3.14

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


