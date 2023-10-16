#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Hello world!\n");
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/____\n");
    
    // char ime = 'D';
    // can only store one character

    char ime[] = "Dalila";
    int godine = 18;

    printf("Moje ime je %s \n", ime);
    printf("I imam %d godina \n", godine);

    godine = 15;

    printf("Sada imam %d godina %s \n", godine, ime);

    double gpa = 4.5;
    // use 'double' to represent decimal numbers

    printf("Hello\"World");

    printf("ovo je %s i neki broj %d \n", "recenica", 23);

    // %c for single character
    // %f for floating point numbers

    printf("%f \n", pow(2, 4) );
    // power of
    printf("%f \n", sqrt(36) );
    // square root
    printf("%f \n", ceil(32.2));
    // round up a number

   // floor(32.6) // rounds down the number   

    int num = 5;
    printf("%d", num);
    num = 13;
    printf("%d", num);

    const int num2 = 10;
    
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    printf("You are %d years old", age);

    double gpa;
    printf("Enter your gpa");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char grade;
    printf("Your grade is:");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char yourName[20];
    // printf("Enter your name");
    // scanf("%s", yourName);
    // printf("Your name is %s", yourName);

    printf("Enter your name");
    fgets(yourName, 20, stdin);
    // stores the value in the string
    // stdin : standard input
    printf("Your name is %s", yourName);

    double number1;
    double number2;
    printf("Enter first number:");
    scanf("%lf", &number1);
    printf("Enter second number:");
    scanf("%lf", &number2);
    printf("Answer: %f", number1 + number2);

    //....................................

    char color[20];
    char color2[20]; 

    printf("Enter a color");
    scanf("%s", color);
    printf("Enter a 2nd color");
    scanf("%s", color2);
    
    printf("Roses are %s \n", color);
    printf("Violets are %S \n", color2);


    return 0;
}
