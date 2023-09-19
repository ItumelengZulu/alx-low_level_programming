int _atoi(char *s) {
  // Skip leading whitespace characters.
  while (*s == ' ' || *s == '\t' || *s == '\n') {
    s++;
  }

  // Check for a sign character.
  int sign = 1;
  if (*s == '+' || *s == '-') {
    sign = (*s == '+') ? 1 : -1;
    s++;
  }

  // Convert the digits in the string to an integer.
  int result = 0;
  while (*s >= '0' && *s <= '9') {
    result = result * 10 + (*s - '0');
    s++;
  }

  // Return the integer, multiplied by the sign.
  return result * sign;
}
