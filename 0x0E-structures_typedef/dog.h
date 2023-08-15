#ifndef MAIN_H
#define MAIN_H

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

#endif
