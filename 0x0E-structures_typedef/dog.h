#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - creates a structure dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: Creates a new struct of dog which
 * has contain name, age and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* A new type dog_t as a new name for type struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
