#include <stdio.h>
#include <math.h>
#include "types.h"

int main() {
    HashMap *map = createHashMap(LETTERS_SIZE);

    initializeLettersMap(map);


    printf("%d\n", getHasMapItem(map, 'A'));

    return 0;
}
