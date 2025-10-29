#include "keys.h"

PublicKey generatePublicKey(long long p, long long q, long long e) {
    long long number = p * q;

    return (PublicKey){ number, e };
}
