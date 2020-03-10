#ifndef DOG
#define DOG

/**
*struct dog -prototype of object dog
*Description:Define a new type struct dog
*@name: name of the dog -string
*@age: his age -float
*@owner:his owner -string
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
