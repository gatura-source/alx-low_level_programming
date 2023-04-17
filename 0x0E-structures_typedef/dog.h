#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog's metadata
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
