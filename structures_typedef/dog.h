#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *create_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
