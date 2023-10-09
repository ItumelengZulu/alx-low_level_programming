#include "dog.h" /* Include the necessary header file */
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to a struct dog variable to be initialized.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the name of the dog's owner.
 *
 * Description: This function initializes a struct dog variable by
 * filling in its name, age, and owner fields.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Check if the pointer to struct d is not NULL */
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

