#ifndef FILES_H
#define FILES_H

void      createPublicKeyFile(long long n, long long e);
void      createCryptedDigitsFile(long long* cryptedDigits, long long size);
void      createDecryptedMessageFile(char* decryptedMessage, long long size);
void      fillNumbersArray(long long* numbersArray, char* file, long long size);
void      fillDecryptedMessage(char* string, long long size);
long long getAmountOfElements(char* file);

#endif