#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    int n;
    int e;
} PublicKey;

typedef struct {
    int n;
    int d;
} SecretKey;

PublicKey generatePublicKey(int p, int q, int e);
SecretKey generateSecretKey(int p, int q, int e);

#endif