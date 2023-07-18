#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            _putchar(c);
        }
    }
    _putchar('\n');
}

int main() {
    print_alphabet_x10();
    return 0;
}
