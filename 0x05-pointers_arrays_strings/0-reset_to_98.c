#include <stdio.h>

/* Function prototype for reset_to_98 */
void reset_to_98(int *n);

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

/* Implement the reset_to_98 function */
void reset_to_98(int *n) {
    *n = 98;
}
