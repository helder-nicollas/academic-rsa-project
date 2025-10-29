#ifndef KEYS_H
#define KEYS_H

typedef struct {
    long long n;
    long long e;
} PublicKey;

typedef struct {
    long long n;
    long long d;
} SecretKey;

PublicKey generatePublicKey(long long p, long long q, long long e);
SecretKey generateSecretKey(long long p, long long q, long long e);

#endif