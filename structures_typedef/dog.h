#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - contains name, age, and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
