#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

struct dog *create_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
void print_dog(struct dog *d);
