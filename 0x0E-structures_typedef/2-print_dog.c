#include "dog.h" /* Include the necessary header file */
#include <stdio.h> /* Include the standard I/O library */

/**
 * print_dog - Prints the information of a struct dog.
 * @d: Pointer to a struct dog variable to be printed.
 *
 * Description: This function prints the name, age, and owner fields of
 * a struct dog variable in the specified format. If any field is NULL,
 * it prints "(nil)" in its place. If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
    /* Check if the pointer to struct d is not NULL */
    if (d != NULL)
    {
        /* Print the name field or "(nil)" if it's NULL */
        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

        /* Print the age field */
        printf("Age: %.6f\n", d->age);

        /* Print the owner field or "(nil)" if it's NULL */
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
}

