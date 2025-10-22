#include <stdio.h>
#include "types/functions.h"

PublicKey generatePublicKey(int p, int q, int e) {
    int number = p * q;

    return (PublicKey){ number, e };
}



SecretKey generateSecretKey(int p, int q, int e) {
    

}