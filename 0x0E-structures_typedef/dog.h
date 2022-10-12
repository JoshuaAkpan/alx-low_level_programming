#ifndef STRUCT
#define STRUCT
/**
 * struct dog - describes a dog specie
 *
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog's owner
 *
 * Description: describes the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - a function
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
