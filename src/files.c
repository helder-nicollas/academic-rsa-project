#include "stdio.h"

void createPublicKeyFile(int n, int e) {
    FILE *fpointer;

    fpointer = fopen("public_key.txt", "w");

    fprintf(fpointer, "%d %d", n, e);

    fclose(fpointer);
}

void createCryptedDigitsFile(int *cryptedDigits, int size) {
    int i;

    FILE *fpointer;

    fpointer = fopen("crypted_digits.txt", "w");

    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            fprintf(fpointer, "%d", cryptedDigits[i]);
        } else {
            fprintf(fpointer, "%d ", cryptedDigits[i]);
        }
    }

    fclose(fpointer);
}

void createDecryptedMessageFile(char *decryptedMessage, int size) {
    int i;

    FILE *fpointer;

    fpointer = fopen("decrypted_message.txt", "w");

    for (i = 0; i < size; i++) {
        fprintf(fpointer, "%c", decryptedMessage[i]);
    }

    fclose(fpointer);
}

void fillNumbersArray(int *numbersArray, char *file, int size) {
    FILE *fpointer;

    int i;

    fpointer = fopen(file, "r");

    for (i = 0; i < size; i++) {
        if (fscanf(fpointer, "%d", &numbersArray[i]) != 1) {
            break;
        }
    }

    fclose(fpointer);
}

void fillDecryptedMessage(char *string, int size) {
    FILE *fpointer;
    
    fpointer = fopen("decrypted_message.txt", "r");

    fgets(string, size, fpointer);

    fclose(fpointer);
}

int getAmountOfElements(char *file) {
    FILE *fpointer;

    int counter = 0, temp;

    fpointer = fopen(file, "r");

    while (fscanf(fpointer, "%d", &temp) == 1) {
        counter++;
    }

    fclose(fpointer);

    return counter;
}
