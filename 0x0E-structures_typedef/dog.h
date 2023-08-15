#ifndef dog_h
#define dog_h
/**
 * struct dog - new type that hold deffirnt data type
 * @name: string to print
 * @owner: string to print
 * @age: string to print
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
