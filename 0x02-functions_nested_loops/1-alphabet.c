#include <main.h>
/**
 * main - function to print lowercase alphabets
 * requirements - use for loop
 * Return - 0 (Success)
 */

void print_alphabet_x10(void) {
  int i;

  for (i = 0; i < 10; i++) {
    for (char c = 'a'; c <= 'z'; c++) {
      _putchar(c);
    }
    _putchar('\n');
  }
}

