#include "stdio.h"

void createPublicKeyFile(long long n, long long e) {
    FILE *fpointer;

    fpointer = fopen("files/public_key.txt", "w");

    fprintf(fpointer, "%lld %lld", n, e);

    fclose(fpointer);
}

void createCryptedDigitsFile(long long *cryptedDigits, long long size) {
    long long i;

    FILE *fpointer;

    fpointer = fopen("files/crypted_digits.txt", "w");

    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            fprintf(fpointer, "%lld", cryptedDigits[i]);
        } else {
            fprintf(fpointer, "%lld ", cryptedDigits[i]);
        }
    }

    fclose(fpointer);
}

void createDecryptedMessageFile(char *decryptedMessage, long long size) {
    long long i;

    FILE *fpointer;

    fpointer = fopen("files/decrypted_message.txt", "w");

    for (i = 0; i < size; i++) {
        fprintf(fpointer, "%c", decryptedMessage[i]);
    }

    fclose(fpointer);
}

void fillNumbersArray(long long *numbersArray, char *file, long long size) {
    FILE *fpointer;

    long long i;

    fpointer = fopen(file, "r");

    for (i = 0; i < size; i++) {
        if (fscanf(fpointer, "%lld", &numbersArray[i]) != 1) {
            break;
        }
    }

    fclose(fpointer);
}

void fillDecryptedMessage(char *string, long long size) {
    FILE *fpointer;
    
    fpointer = fopen("files/decrypted_message.txt", "r");

    fgets(string, size, fpointer);

    fclose(fpointer);
}

long long getAmountOfElements(char *file) {
    FILE *fpointer;

    long long counter = 0, temp;

    fpointer = fopen(file, "r");

    while (fscanf(fpointer, "%lld", &temp) == 1) {
        counter++;
    }

    fclose(fpointer);

    return counter;
}
