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

const char LETTERS[27] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z', ' '
};

PublicKey generatePublicKey(int p, int q, int e);
SecretKey generateSecretKey(int p, int q, int e);

#endif