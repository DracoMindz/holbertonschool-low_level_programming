#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog struct
 * @age: dog age
 * @name: dog name
 * @owner: dog owner
 *
 * Description: dog header struct
 */
struct dog
{
float age;
char *name;
char *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
