#include "main.h"

void _putchar(char c) {
    _putchar(c);
}

void print_alphabet_x10(void) {
    int i;
    char c;
    for (i = 0; i < 10; i++) {
        for (c = 'a'; c <= 'z'; c++) {
            _putchar(c);
        }
        _putchar('\n');
    }
}

int main() {
    print_alphabet_x10();
    return 0;
}
