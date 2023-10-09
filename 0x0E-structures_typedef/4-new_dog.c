#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the name of the dog's owner.
 *
 * Return: Pointer to the newly created dog (dog_t).
 *         NULL if memory allocation fails or if any of the input pointers is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *temp_dog_ptr;
    dog_t *new_dog_ptr;

    /* Declare the temporary pointer first */
    temp_dog_ptr = malloc(sizeof(dog_t));

    /* Check if memory allocation failed */
    if (temp_dog_ptr == NULL) {
        return NULL;
    }

    /* Check if any of the input pointers is NULL */
    if (name == NULL || owner == NULL) {
        free(temp_dog_ptr); /* Free memory if allocation succeeded but input is invalid */
        return NULL;
    }

    /* Assign the temporary pointer to the new_dog_ptr */
    new_dog_ptr = temp_dog_ptr;

    /* Duplicate the name and owner strings using strdup */
    new_dog_ptr->name = strdup(name);
    new_dog_ptr->owner = strdup(owner);

    /* Check if strdup failed for name or owner */
    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {
        /* Free any allocated memory before returning NULL */
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return NULL;
    }

    /* Set the age of the new dog */
    new_dog_ptr->age = age;

    return new_dog_ptr;
}

