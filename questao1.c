#include <stdio.h>

int converterRomanoParaDecimal(char numeroRomano[]) {
    int resultadoDecimal = 0;
    int valorAnterior = 0;
    int indice = 0;

    while (numeroRomano[indice] != '\0') {
        int valorAtual = 0;

        switch (numeroRomano[indice]) {
            case 'I': valorAtual = 1; break;
            case 'V': valorAtual = 5; break;
            case 'X': valorAtual = 10; break;
            case 'L': valorAtual = 50; break;
            case 'C': valorAtual = 100; break;
            case 'D': valorAtual = 500; break;
            case 'M': valorAtual = 1000; break;
            break;
        }

        if (valorAtual > valorAnterior) {
            resultadoDecimal += valorAtual - 2 * valorAnterior;
        } else {
            resultadoDecimal += valorAtual;
        }

        valorAnterior = valorAtual;
        indice++;
    }

    return resultadoDecimal;
}

void decimalParaBinario(int numeroDecimal) {
    if (numeroDecimal == 0) {
        printf("0");
        return;
    }

    int representacaoBinaria[32];
    int indice = 0;

    while (numeroDecimal > 0) {
        representacaoBinaria[indice++] = numeroDecimal % 2;
        numeroDecimal /= 2;
    }

    while (indice > 0) {
        printf("%d", representacaoBinaria[--indice]);
    }

    printf("\n");
}

int main() {
    char numeralRomano[20];
    int numeralDecimal;

    scanf("%s", numeralRomano);

    numeralDecimal = converterRomanoParaDecimal(numeralRomano);

    if (numeralDecimal != -1) {
        printf("%s na base 2: ", numeralRomano);
        decimalParaBinario(numeralDecimal);

        printf("%s na base 10: %d\n", numeralRomano, numeralDecimal);

        printf("%s na base 16: %x\n", numeralRomano, numeralDecimal);
    }

    return 0;
}
