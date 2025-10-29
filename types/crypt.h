#ifndef CRYPT_H
#define CRYPT_H

long long encrypt(char* message, long long *cryptedDigits, long long e, long long n);
long long decrypt(long long *cryptedMessage, char *decyptedMessage, long long e, long long n, long long m, long long size);

#endif