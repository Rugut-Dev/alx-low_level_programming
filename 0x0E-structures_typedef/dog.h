#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog description
 * @name: char
 * @age: int
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
