#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that that creates a new dog
 * @name: what the name of the dog is
 * @age: how old the dog is
 * @owner: who the dog belongs to
 * Return: results
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t a, b, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	dog->name = malloc(sizeof(char) * a);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < a ; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	dog->owner = malloc(sizeof(char) * b);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
