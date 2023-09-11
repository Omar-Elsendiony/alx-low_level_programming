#ifndef DOG_H
#define DOG_H
/**
* struct dog - the dog
* @name: name
* @owner: name
* @age: name
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
