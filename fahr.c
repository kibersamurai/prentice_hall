#include <stdio.h>
int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = -18;

    upper = 300;
    step = 20;
    celsius = lower;
    printf("Fahr   Celsius \n");
    while (fahr <= upper) {
        fahr = ( celsius / (5.0 / 9.0) ) + 32.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}