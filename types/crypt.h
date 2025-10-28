#ifndef CRYPT_H
#define CRYPT_H

int encrypt(char* message, int *cryptedDigits, int e, int n);
int decrypt(int *cryptedMessage, char *decyptedMessage, int e, int n, int m, int size);

#endif