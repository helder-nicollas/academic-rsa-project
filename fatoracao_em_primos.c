#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int numero, p, q, i = 2;
    int quantidadeDePrimos = 0;

    scanf("%llu", &numero);
    
    while (quantidadeDePrimos < 2) {
        if (numero % i == 0 && quantidadeDePrimos == 0) {
            quantidadeDePrimos++;

            p = i;
        } else if (numero % i == 0 && quantidadeDePrimos == 1) {
            quantidadeDePrimos++;

            q = i;
        }

        if (i == 2) {
            i++;
        } else {
            i += 2;
        }
    }

    printf("%llu %llu", p, q);

    return 0;
}
