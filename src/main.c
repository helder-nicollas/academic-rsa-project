#include <stdio.h>
#include <math.h>
#include <string.h>
#include "types.h"
#include "files.h"

int main() {
    char message[1000];
    long long option, p, q, e, n, m;
    
    printf("Criptografia RSA\n");
    printf("----------------------------\n");
    printf("[1] - Gerar chave pública\n");
    printf("[2] - Criptografar\n");
    printf("[3] - Descriptografar\n");
    printf("----------------------------\n");
    printf("Escolha sua opção: ");
    scanf("%lld", &option);
    printf("----------------------------\n");

    if (option == 1 || option == 3) {
        printf("Digite o primo 'p': ");
        scanf("%lld", &p);

        printf("Digite o primo 'q': ");
        scanf("%lld", &q);

        printf("Digite o expoente 'e', relativamente primo a (p - 1)(q - 1): ");
        scanf("%lld", &e);

        n = p * q;

        if (option == 1) {
            createPublicKeyFile(n, e);
        } else if (option == 3) {
            long long publicKey[2];

            fillNumbersArray(publicKey, "files/public_key.txt", 2);

            if (publicKey[0] != n || publicKey[1] != e) {
                printf("A chave pública informada está incorreta.\n");
            } else {
                long long size = getAmountOfElements("files/crypted_digits.txt");

                long long cryptedDigits[size];

                fillNumbersArray(cryptedDigits, "files/crypted_digits.txt", size);

                char decryptedMessage[size];

                m = (p - 1) * (q - 1);

                decrypt(cryptedDigits, decryptedMessage, e, n, m, size);

                createDecryptedMessageFile(decryptedMessage, size);
            }
        }
    } else if (option == 2) {
        printf("Digite a mensagem a criptografar: ");
        scanf(" %[^\n]%*c", message);

        printf("Digite a chave pública informada anteriormente (n, e): ");
        scanf("%lld%lld", &n, &e);

        long long publicKey[2];

        fillNumbersArray(publicKey, "files/public_key.txt", 2);

        if (publicKey[0] != n || publicKey[1] != e) {
            printf("A chave pública informada está incorreta.\n");
        } else {
            long long size = strlen(message);

            long long cryptedDigits[size];

            encrypt(message, cryptedDigits, e, n);

            createCryptedDigitsFile(cryptedDigits, size);
        }
    }

    /*
    scanf("%d%d%d %[^\n]%*c", &p, &q, &e, message);

    size_t size = strlen(message);

    long long cryptedDigits[size];
    char decryptedMessage[size];

    long long n = p * q;
    long long m = (p - 1) * (q - 1);

    encrypt(message, cryptedDigits, e, n);

    decrypt(cryptedDigits, decryptedMessage, e, n, m, size);
    */

    return 0;
}
