#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calcule la longueur d'une chaîne
 * @s: Chaîne de caractères
 * Return: Longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copie une chaîne vers une autre
 * @dest: Destination
 * @src: Source
 * Return: Pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 * Return: Pointeur vers le nouveau chien, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_name)
	{
		free(dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_owner)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
