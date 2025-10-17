#include <stdio.h>
#include <math.h>

void preencherArrayBase(int* arr, int x, int y, int contadorExecucoes) {
    if (y == 0) {
        arr[0] = x;
        arr[1] = contadorExecucoes + 2;
        arr[2] = contadorExecucoes;
    } else {
        contadorExecucoes++;

        preencherArrayBase(arr, y, x % y, contadorExecucoes);
    }
}

void printarCombinacoes(int x, int y, int mdc) {
    int coeficienteY = x / y;
    int resto = x % y;

    printf("%d = %d * %d + %d\n", x, coeficienteY, y, resto);

    if (resto != mdc) {
        printarCombinacoes(y, x % y, mdc);
    }
}

void preencherMatrizValoresCoeficientesPorExecucao(int matriz[][3][2], int x, int y, int mdc, int contador) {
    int coeficienteY = x / y;
    int resto = x % y;

    matriz[contador][0][0] = x;
    matriz[contador][0][1] = 1;
    matriz[contador][1][0] = y;
    matriz[contador][1][1] = coeficienteY;
    matriz[contador][2][0] = resto;
    matriz[contador][2][1] = 1;

    contador++;

    if (resto != mdc) {
        preencherMatrizValoresCoeficientesPorExecucao(matriz, y, x % y, mdc, contador);
    }
}

int main() {
    int x, y, mdc, quantidadeDeTermos, quantidadeDeExecucoes, inverso, resto;
    int i, j, k;
    int contador = 0;
    int arrayBase[3];

    scanf("%d%d", &x, &y);

    preencherArrayBase(arrayBase, x, y, -1);

    mdc = arrayBase[0];
    quantidadeDeTermos = arrayBase[1];
    quantidadeDeExecucoes = arrayBase[2];

    int valoresCoeficientesPorExecucao[quantidadeDeExecucoes][3][2];
    int valoresCoeficientesAtuais[3][2];

    // printarCombinacoes(x, y, arrayBase[0]);

    preencherMatrizValoresCoeficientesPorExecucao(valoresCoeficientesPorExecucao, x, y, mdc, 0);

    for (i = quantidadeDeExecucoes - 1; i > -1; i--) {
        valoresCoeficientesPorExecucao[i][1][1] *= -1;

        if (i == quantidadeDeExecucoes - 1) {
            for (j = 0; j < 3; j++) {
                for (k = 0; k < 2; k++) {
                    valoresCoeficientesAtuais[j][k] = valoresCoeficientesPorExecucao[i][j][k];
                }
            }
        } else {
            for (j = 0; j < 2; j++) {
                valoresCoeficientesPorExecucao[i][j][1] *= valoresCoeficientesAtuais[1][1];
            }

            valoresCoeficientesPorExecucao[i][1][1] += valoresCoeficientesAtuais[0][1];

            for (j = 0; j < 2; j++) {
                for (k = 0; k < 2; k++) {
                    valoresCoeficientesAtuais[j][k] = valoresCoeficientesPorExecucao[i][j][k];
                }
            }
        }

        // printf("%d = (%d * %d) + (%d * %d)\n", valoresCoeficientesAtuais[2][0], valoresCoeficientesAtuais[0][1], valoresCoeficientesAtuais[0][0], valoresCoeficientesAtuais[1][1], valoresCoeficientesAtuais[1][0]);

        if (i < quantidadeDeExecucoes - 1) {
            
        }

        for (j = 2; j > -1; j--) {
            for (k = 1; k > -1; k--) {
                // printf("%d ", valoresCoeficientesPorExecucao[i][j][k]);
            }
        }
    }

    inverso = valoresCoeficientesAtuais[0][1];

    if (inverso > y) {
        inverso %= y;
    } else if (inverso < 0) {
        inverso += ((inverso / y) + 1) * y;
    }

    printf("Inverso de %d (mod %d) dentro do intervalo (0, %d) = %d", x, y, y, inverso);

    return 0;
}
