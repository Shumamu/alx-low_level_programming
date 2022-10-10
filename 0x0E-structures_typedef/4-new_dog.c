#include "dog.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */



char *_strdup(char *str)

{

	int length, i;

	char *arr;



	if (str == NULL)

	{

		return (NULL);

	}



	length = 0;

	while (*(str + length) != '\0')

	{

		length++;

	}



	arr = (char*) malloc(length * sizeof(char) + 1);

	if (arr == NULL)

		return (NULL);



	for (i = 0; i < length; i++)

	{

		arr[i] = str[i];

	}

	arr[i] = '\0';



	return (arr);

}



/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog (dog_t)
 */



dog_t *new_dog(char *name, float age, char *owner)

{

	dog_t *dog;

	char *dog_name, *dog_owner;



	dog = malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);



	dog_name = _strdup(name);

	if (dog_name == NULL)

	{

		free(dog);

		return (NULL);

	}



	dog_owner = _strdup(owner);

	if (dog_owner == NULL)

	{

		free(dog_name);

		free(dog);

		return (NULL);

	}

	dog->name = dog_name;

	dog->age = age;

	dog->owner = dog_owner;

	return (dog);
}
