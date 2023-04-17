#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: member1
 * @age: member2
 * @owner: member3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int strlen(char *s);
char *_strcpy(char *dest, char *src);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
