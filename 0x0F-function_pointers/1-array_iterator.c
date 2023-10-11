#include <stdio.h>

void array_iterator(int *array, unsigned int size, void (*action)(int)) {
    if (array != NULL && action != NULL) {
        unsigned int i;
        for (i = 0; i < size; i++) {
            action(array[i]);
        }
    }
}

/* Example action function to print an integer */
void print_integer(int num) {
    printf("%d ", num);
}

/* Example action function to square an integer */
void square_integer(int *num) {
    *num = (*num) * (*num);
}

