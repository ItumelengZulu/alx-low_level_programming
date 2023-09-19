/* Skip leading whitespace characters. */
int _atoi(char *s) {
  int sign = 1;
  int result = 0;

  while (*s == ' ' || *s == '\t' || *s == '\n') {
    s++;
  }

  if (*s == '+' || *s == '-') {
    sign = (*s == '+') ? 1 : -1;
    s++;
  }

  while (*s >= '0' && *s <= '9') {
    result = result * 10 + (*s - '0');
    s++;
  }

  return result * sign;

