#include <stdio.h>

int main() {
    double a, b;
    char operacija;

    printf("Unesi prvi broj: ");
    scanf("%lf", &a);

    printf("Unesi operaciju (+, -, *, /): ");
    scanf(" %c", &operacija);

    printf("Unesi drugi broj: ");
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
