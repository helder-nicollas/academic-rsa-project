#include "hash-map.h"
#include "stdlib.h"
#include "string.h"

HashMap* createHashMap(size_t size) {
    HashMap *map = malloc(sizeof(HashMap));
    map->size = size;
    map->buckets = calloc(size, sizeof(Node*));
    return map;
}


unsigned long hash(const char key, size_t size) {
    unsigned long charNumber = (long long)key;
    return (charNumber * 33) % size;
}


void putHashMapItem(HashMap *map, char key, long long value) {
    unsigned long index = hash(key, map->size);
    Node *newNode = malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (map->buckets[index] == NULL) {
        map->buckets[index] = newNode;
        return;
    }


    Node *current = map->buckets[index];

    while (current->next) current = current->next;

    current->next = newNode;
}


long long getHasMapItem(HashMap *map, const char key) {
    unsigned long index = hash(key, map->size);
    Node *current = map->buckets[index];
    while (current) {
        if (current->key == key)
            return current->value;
        current = current->next;
    }
    return -1;
}


void freeHashMap(HashMap *map) {
    for (size_t i = 0; i < map->size; i++) {
        Node *current = map->buckets[i];
        while (current) {
            Node *tmp = current;
            current = current->next;
            free(tmp);
        }
    }
    free(map->buckets);
    free(map);
}