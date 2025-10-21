#include <stdio.h>

unsigned long long modularExponentiation(unsigned long long base, unsigned long long mod, int binaryExp[], int size)
{
    unsigned long long result = 1;

    for (int i = 0; i < size; i++)
    {
        result = (result * result) % mod;

        if (binaryExp[i] == 1)
        {
            result = (result * base) % mod;
        }
    }

    return result;
}

int decimalToBinary(unsigned long long n, int binary[])
{
    int i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = 0; j < i / 2; j++)
    {
        int temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }

    return i;
}

int main()
{
    unsigned long long base, exp, mod;
    printf("Digite base, expoente e modulo: ");
    scanf("%llu %llu %llu", &base, &exp, &mod);

    int binary[128];
    int size = decimalToBinary(exp, binary);

    printf("Expoente em binario: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    unsigned long long result = modularExponentiation(base, mod, binary, size);

    printf("Resultado: %llu\n", result);

    return 0;
}