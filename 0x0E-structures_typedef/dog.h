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
struct dog
{
char *name;
float age;
char *owner;
};
/**
struct dog *d(char *name, float age, char *owner)
{
struct dog dog-t;
dog-t = malloc(sizeof(struct dog));
if (dog-t == NULL)
return (NULL);
}
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
