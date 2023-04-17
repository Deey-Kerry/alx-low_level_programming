#ifndef dog_h
#define dog_h
/**
 * struct dog - variables of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Description: dog variables
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_ck - dog struct
 */
typedef struct dog dog_ck;
void init_dog(struct dog *g, char *name, float age, char *owner);
void print_dog(struct dog *g);
dog_ck *mix_dog(char *name, float age, char *owner);
void free_dog(dog_ck *g);
#endif

