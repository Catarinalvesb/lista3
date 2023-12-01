#include <stdio.h>

double calcularPotencia(double base, int expoente) {
    double resultado = 1.0;
    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

double calcularMontante(double A, double i, int periodo) {
    double fator = 1.0 + i; 
    double termo_potencia = calcularPotencia(fator, periodo);
    return A * fator * ((termo_potencia - 1) / i);
}

int main() {
    int t;
    double A, i, M;

    scanf("%d", &t);
    scanf("%lf", &A);
    scanf("%lf", &i);

    for (int periodo = 1; periodo <= t; periodo++) {
        M = calcularMontante(A, i, periodo);
        printf("Montante ao fim do mes %d: R$ %.2lf\n", periodo, M);
    }

    return 0;
}
