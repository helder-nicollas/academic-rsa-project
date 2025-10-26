#ifndef CRYPT_H
#define CRYPT_H

int encrypt(char* message, int e, int n);
int decrypt(int *cryptedMessage, int e, int n, int m, int size);

#endif