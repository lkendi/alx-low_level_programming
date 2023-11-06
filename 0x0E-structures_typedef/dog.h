#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct defining a dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
	void init_dog(struct dog *d, char *name, float age, char *owner);
	char *_strdup(char *s);
	void print_dog(struct dog *d);
	typedef struct dog dog_t;
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
#endif
