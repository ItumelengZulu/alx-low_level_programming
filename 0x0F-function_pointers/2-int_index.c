#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int)) {
    if (array != NULL && cmp != NULL && size > 0) {
        int i;
        for (i = 0; i < size; i++) {
            if (cmp(array[i])) {
                return i;  /* Found a match; return the index */
            }
        }
    }
    return -1;  /* No match found or invalid input */
}

/* Example comparison function to find an even number */
int is_even(int num) {
    return num % 2 == 0;
}

/* Example comparison function to find a number greater than 10 */
int is_greater_than_10(int num) {
    return num > 10;
}

