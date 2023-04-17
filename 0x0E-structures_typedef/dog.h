#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - represents a dog's basic info
 * @name: member1
 * @age: member2
 * @owner: member3
 * Description: struct represents a dog's info
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

#endif
