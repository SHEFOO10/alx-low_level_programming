#ifndef DOG_H
#define DOG_H

/**
<<<<<<< HEAD
 * struct dog - make structure for a dog
 * @name:  name
 * @age: age
 * @owner:  owner
 *
 */


=======
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
>>>>>>> a4fb9a11c93c2319793d39307264692591735c6b
struct dog
{
	char *name;
	float age;
<<<<<<< HEAD
	char* owner;
}
=======
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
>>>>>>> a4fb9a11c93c2319793d39307264692591735c6b

#endif
