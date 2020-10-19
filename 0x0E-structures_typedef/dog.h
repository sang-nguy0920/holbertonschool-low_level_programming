#ifndef HOLBERTON_DOG
#define HOLBERTON_DOG

int _putchar(char c);

/**
 * struct dog - name, age, owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: name, age, owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name for struct dog.
 */
typedef struct dog dog_t;

#endif
