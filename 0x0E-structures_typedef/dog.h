#ifndef DOG_H
#define DOG_H
/**
  * struct dog- define new type
  * @name: the name of the dog
  * @age: The age of the dog
  * @owner: the owner of the dog
  *
  * Description: The attributes of a dog
  */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
