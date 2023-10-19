#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h>

// double cube(double num) {

//     double result = num * num * num;
//     return result;

// }

// int main()
// {
//     printf("Hello world!\n");
//     printf("   /|\n");
//     printf("  / |\n");
//     printf(" /  |\n");
//     printf("/____\n");
    
//     // char ime = 'D';
//     // can only store one character

//     char ime[] = "Dalila";
//     int godine = 18;

//     printf("Moje ime je %s \n", ime);
//     printf("I imam %d godina \n", godine);

//     godine = 15;

//     printf("Sada imam %d godina %s \n", godine, ime);

//     // double gpa = 4.5;
//     // use 'double' to represent decimal numbers

//     printf("Hello\"World");

//     printf("ovo je %s i neki broj %d \n", "recenica", 23);

//     // %c for single character
//     // %f for floating point numbers

//     printf("%f \n", pow(2, 4) );
//     // power of
//     printf("%f \n", sqrt(36) );
//     // square root
//     printf("%f \n", ceil(32.2));
//     // round up a number

//    // floor(32.6) // rounds down the number   

//     int num = 5;
//     printf("%d", num);
//     num = 13;
//     printf("%d", num);

//     const int num2 = 10;
    
//     int age;
//     printf("Enter your age");
//     scanf("%d", &age);
//     printf("You are %d years old", age);

//     double gpa;
//     printf("Enter your gpa");
//     scanf("%lf", &gpa);
//     printf("Your gpa is %f", gpa);

//     char grade;
//     printf("Enter your grade:");
//     scanf("%c", &grade);
//     printf("Your grade is %c", grade);

//     char yourName[20];
//     // printf("Enter your name");
//     // scanf("%s", yourName);
//     // printf("Your name is %s", yourName);

//     printf("Enter your name");
//     fgets(yourName, 20, stdin);
//     // stores the value in the string
//     // stdin : standard input
//     printf("Your name is %s", yourName);

//     double number1;
//     double number2;
//     printf("Enter first number:");
//     scanf("%lf", &number1);
//     printf("Enter second number:");
//     scanf("%lf", &number2);
//     printf("Answer: %f", number1 + number2);

//     //....................................

//     char color[20];
//     char color2[20]; 

//     printf("Enter a color");
//     scanf("%s", color);
//     printf("Enter a 2nd color");
//     scanf("%s", color2);
    
//     printf("Roses are %s \n", color);
    // printf("Violets are %S \n", color2);

    // char firstName[20];
    // char lastName[20];

    // printf("Enter your full name");
    // scanf("%s%s", firstName, lastName);
    // printf("Your full name is %s %s", firstName, lastName);

    //.............Arrays

    // int array with integers, char array of characters...

    // int numbers[] = {3 ,4, 1, 3, 5, 6, 8};
    // printf("%d", numbers[0]);
    // numbers[0] = 200;
    // printf("%d", numbers[0]);

    // int numbers2[10];
    // numbers2[0] = 23;
    // printf("%d", numbers2[0]);

    //..............functions

    // sayHi("Mike", 23);
    // sayHi("John", 12);

    // printf("Answer: %f", cube(2.3));



//     return 0;
// }


// void sayHi(char name[], int age) {
//     printf("hi %s, you are %d years old \n", name, age);

// } 

// int max(int num1, int num2, int num3) {
//     int result;
//     if(num1 > num2 && num1 > num3) {
//         result = num1;
//     } else if(num2 > num1  && num2 > num3) {
//         result = num2;
//     }  else {
//         result = num3;
//     }

//     return result;
// }


// int main() {

//     printf("%d", max(212,332, 45));

//     if(!( 3 > 2)) {
//         printf("True");
//     }
    

// }

// int main() {
    // double num1;
    // double num2;
    // char operator;

    // printf("Enter a number: ");
    // scanf("%lf", &num1);
    // printf("Enter an operator: ");
    // scanf("%s", &operator);
    // printf("Enter a second number: ");
    // scanf("%lf", &num2);

    // if(operator == '+') printf("%f", num1 + num2);
    // else if (operator == '-') printf("%f", num1 - num2);
    // else if (operator == '/' ) printf("%f", num1 / num2);
    // else if(operator == '*') printf("%f", num1 * num2);
    // else printf("Invalid operator");

    //....................................................
    
    // char grade = 'A';

    // switch (grade) {
    //     case 'A' : printf("You did excellent");
    //     break;
    //     case 'B': printf("You did very good");
    //     break;
    //     case 'C': printf("You did good");
    //     break;
    //     default: printf("Bad");
    // }

//    return 0;
// }

//................................................

// struct Student {
//     char name[50];
//     char major[50];
//     int age;
//     double gpa;
// };

// int main() {
//     struct Student student1;
//     student1.age = 21;
//     student1.gpa = 4.5;
//     strcpy(student1.name, "Ado");
//     strcpy(student1.major, "CS");

//     printf("%f", student1.gpa);
//     printf("%s", student1.name);

//     return 0;
// }