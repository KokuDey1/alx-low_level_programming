#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The dog information
 * @name: Dog age
 * @age: dog age
 * @owner: dog owner
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct do
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
