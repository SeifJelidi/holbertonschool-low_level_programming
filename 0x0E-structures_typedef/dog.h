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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
