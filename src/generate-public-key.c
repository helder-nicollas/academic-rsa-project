#include "keys.h"

PublicKey generatePublicKey(int p, int q, int e) {
    int number = p * q;

    return (PublicKey){ number, e };
}
