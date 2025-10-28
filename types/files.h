#ifndef FILES_H
#define FILES_H

void createPublicKeyFile(int n, int e);
void createCryptedDigitsFile(int *cryptedDigits, int size);
void createDecryptedMessageFile(char *decryptedMessage, int size);
void fillNumbersArray(int *numbersArray, char *file, int size);
void fillDecryptedMessage(char *string, int size);
int getAmountOfElements(char *file);

#endif