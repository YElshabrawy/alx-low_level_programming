#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: A struct for a dog with name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
