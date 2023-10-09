#ifndef DOG_H
#define DOG_H

/*
 * struct dog
 *
 * This struct represents a dog. It has three members:
 *
 * name: A pointer to a character array containing the dog's name.
 * age: A floating-point number representing the dog's age in years.
 * owner: A pointer to a character array containing the dog's owner's name.
 */
struct dog {
  char *name;
  float age;
  char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

