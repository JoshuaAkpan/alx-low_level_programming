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
 *init_dog - a function
 *@d: a pointer to the struct type
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
