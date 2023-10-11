#include <stdio.h>
#include <ctype.h>

void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}

/* Example print function that prints the name in uppercasev */
void print_uppercase(char *name) {
    while (*name) {
        putchar(toupper(*name));
        name++;
    }
    putchar('\n');
}

/* Example print function that prints the name in lowercase */
void print_lowercase(char *name) {
    while (*name) {
        putchar(tolower(*name));
        name++;
    }
    putchar('\n');
}
