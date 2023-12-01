#include <stdio.h>
#include <string.h>
void placaerrada(char dia[]) {
    if(strcmp(dia, "SEGUNDA-FEIRA") != 0 && strcmp(dia, "TERCA-FEIRA") != 0 
    && strcmp(dia, "QUARTA-FEIRA") != 0 && strcmp(dia, "QUINTA-FEIRA") != 0
    && strcmp(dia, "SEXTA-FEIRA") != 0 && strcmp(dia, "SABADO") != 0
    && strcmp(dia, "DOMINGO") != 0) {
        printf("Dia da semana invalido\n");
    }

}

void segundaFeira(char placa[]) {
    if (placa[7] == '1' || placa[7] == '0') {
        printf("%s nao pode circular segunda-feira\n", placa);
    } else {
        printf("%s pode circular segunda-feira\n", placa);
    }
}

void tercaFeira(char placa[]) {
    if (placa[7] == '3' || placa[7] == '2') {
        printf("%s nao pode circular terca-feira\n", placa);
    } else {
        printf("%s pode circular terca-feira\n", placa);
    }
}

void quartaFeira(char placa[]) {
    if (placa[7] == '5' || placa[7] == '4') {
        printf("%s nao pode circular quarta-feira\n", placa);
    } else {
        printf("%s pode circular quarta-feira\n", placa);
    }
}

void quintaFeira(char placa[]) {
    if (placa[7] == '7' || placa[7] == '6') {
        printf("%s nao pode circular quinta-feira\n", placa);
    } else {
        printf("%s pode circular quinta-feira\n", placa);
    }
}

void sextaFeira(char placa[]) {
    if (placa[7] == '9' || placa[7] == '8') {
        printf("%s nao pode circular sexta-feira\n", placa);
    } else {
        printf("%s pode circular sexta-feira\n", placa);
    }
}

void segundaSul(char placa[]) {
    if (placa[6] == '0' || placa[6] == '1') {
        printf("%s nao pode circular segunda-feira\n", placa);
    } else {
        printf("%s pode circular segunda-feira\n", placa);
    }
}

void tercaSul(char placa[]) {
    if (placa[6] == '3' || placa[6] == '2') {
        printf("%s nao pode circular terca-feira\n", placa);
    } else {
        printf("%s pode circular terca-feira\n", placa);
    }
}

void quartaSul(char placa[]) {
    if (placa[6] == '4' || placa[6] == '5') {
        printf("%s nao pode circular quarta-feira\n", placa);
    } else {
        printf("%s pode circular quarta-feira\n", placa);
    }
}

void quintaSul(char placa[]) {
    if (placa[6] == '6'|| placa[6] == '7') {
        printf("%s nao pode circular quinta-feira\n", placa);
    } else {
        printf("%s pode circular quinta-feira\n", placa);
    }
}

void sextaSul(char placa[]) {
    if (placa[6] == '8' ||placa[6] == '9') {
        printf("%s nao pode circular sexta-feira\n", placa);
    } else {
        printf("%s pode circular sexta-feira\n", placa);
    }
}

int main() {
    char placa[10];
    char dia[15];
    int verificar;

    scanf("%s", placa);
    scanf("%s", dia);

    if (strlen(placa) == 8 && placa[3] == '-') {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            segundaFeira(placa);
        } else if (strcmp(dia, "TERCA-FEIRA") == 0) {
            tercaFeira(placa);
        } else if (strcmp(dia, "QUARTA-FEIRA") == 0) {
            quartaFeira(placa);
        } else if (strcmp(dia, "QUINTA-FEIRA") == 0) {
            quintaFeira(placa);
        } else if (strcmp(dia, "SEXTA-FEIRA") == 0) {
            sextaFeira(placa);
        } else if (strcmp(dia, "SABADO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } else if (strcmp(dia, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        }
    } else if (strlen(placa) == 7 && placa[2] != '-') {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            segundaSul(placa);
        } else if (strcmp(dia, "TERCA-FEIRA") == 0) {
            tercaSul(placa);
        } else if (strcmp(dia, "QUARTA-FEIRA") == 0) {
            quartaSul(placa);
        } else if (strcmp(dia, "QUINTA-FEIRA") == 0) {
            quintaSul(placa);
        } else if (strcmp(dia, "SEXTA-FEIRA") == 0) {
            sextaSul(placa);
        } else if (strcmp(dia, "SABADO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } else if (strcmp(dia, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } else if(verificar == 1){
            printf("Dia da semana invalido");
          }
    } else {
        printf("Placa invalida\n");
    }
    
    placaerrada(dia);
    
    return 0;
}
