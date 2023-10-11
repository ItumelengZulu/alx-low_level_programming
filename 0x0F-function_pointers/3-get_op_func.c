#include "3-calc.h"

int (*get_op_func(char *s))(int, int) {
    int i = 0;

    while (ops[i].op) {
        if (*s == *(ops[i].op) && *(s + 1) == '\0') {
            return ops[i].f;
        }
        i++;
    }

    return NULL;
}

