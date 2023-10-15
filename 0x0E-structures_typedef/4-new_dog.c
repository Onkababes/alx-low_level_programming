#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that that creates a new dog
 * @name: what the name of the dog is
 * @age: how old the dog is
 * @owner: who the dog belongs to
 * Return: results
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a1, b1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a1 = 0; name[a1] != '\0'; a1++)
		;
	a1++;
	dog->name = malloc(sizeof(char) * a1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < a1 ; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (b1 = 0; owner[b1] != '\0'; b1++)
		;
	b1++;
	dog->owner = malloc(sizeof(char) * b1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < b1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
