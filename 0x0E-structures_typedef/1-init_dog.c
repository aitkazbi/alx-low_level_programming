#include "dog.h"
#include <stdio.h>

/**
  * init_dog- initialize a variable of type struct dog
  * @d: structur
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the owner of the dog
  * Return: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d != NULL)
{
d->.name = name;
d->.age = age;
d->.owner = owner;

}
}
