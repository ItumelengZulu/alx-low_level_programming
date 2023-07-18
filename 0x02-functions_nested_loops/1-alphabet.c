#include <main.h>
/**
 * main - function to print lowercase alphabets
 * requirements - use for loop
 * Return - 0 (Success)
 */
#include <stdio.h>

void print_alphabet(void) {

  char c;

  for (c = 'a'; c <= 'z'; c++) {
    _putchar(c);
  }
  _putchar('\n');
  return;
}
