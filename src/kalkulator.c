#include <stdio.h>

int main() {
    double a, b;
    char operacija;

    printf("Vnesite prvo stevilo: ");
    scanf("%lf", &a);

    printf("Vnesite operacijo (+, -, *, /): ");
    scanf(" %c", &operacija);

    printf("Vnesite stevilo: ");
    scanf("%lf", &b);

    switch (operacija) {
        case '+':
            printf("Rezultat: %.2f\n", a + b);
            break;
        case '-':
            printf("Rezultat: %.2f\n", a - b);
            break;
        case '*':
            printf("Rezultat: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Rezultat: %.2f\n", a / b);
            } else {
                printf("Greska: dijeljenje nulom!\n");
            }
            break;
        default:
            printf("Nepoznata operacija!\n");
    }

    return 0;
}
