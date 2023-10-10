#include <stdio.h > 
#include <stdlib.h >

int main() {

    float br = 1.2;
    int a = 23;
    char ime[] = "Dalila";

    const int b = 16;

    int c = a + b;

    printf("%.2f \n", br);
    printf("%s \n", ime);

    for(int i = 0; i < 10; i++) {
        printf("%d \n", i);
    }

    float y;
    y = (float)10 / 4;
    printf("%f \n", y);

    if(b > 10) {
        printf("b je vece od 10");
    }
    else {
        printf("b nije vece od 10");
    };

    return 0;
}
