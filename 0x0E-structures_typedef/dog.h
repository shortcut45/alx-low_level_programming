#include <stdio.h>

/**
 * Description- define a new type struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog dog;

	dog.name = "Poppy";
	dog.age = 3.5;
	dog.owner = "Bob";

	printf("Name of the dog: %s\n", dog.name);
	printf("Age of the dog: %.1f\n", dog.age);
	printf("Owner of the dog: %s\n", dog.owner);

	return (0);
}
