char *leet(char *str) {
  char *ptr = str; /* Create a pointer to the original string for returning later */

  for (int i = 0; str[i] != '\0'; i++) {
    while (*str) {
      char c = *str;
      if (c == 'a' || c == 'A') {
        *str = '4';
      } else if (c == 'e' || c == 'E') {
        *str = '3';
      } else if (c == 'o' || c == 'O') {
        *str = '0';
      } else if (c == 't' || c == 'T') {
        *str = '7';
      } else if (c == 'l' || c == 'L') {
        *str = '1';
      }
      str++;
    }
  }

  return ptr; /* Return the modified string */
}

