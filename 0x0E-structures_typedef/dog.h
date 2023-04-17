#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type dog
 * @name: char*
 * @age: float
 * @owner: char*
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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
