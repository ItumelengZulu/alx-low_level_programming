char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  // Check if the buffer is large enough to store the result.
  if (size_r < (strlen(n1) + strlen(n2) + 1)) {
    return 0;
  }

  // Initialize the carry.
  int carry = 0;

  // Iterate over the two numbers, adding each digit and the carry.
  for (int i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 1; i >= 0 || j >= 0 || carry; i--, j--, k--) {
    int digit1 = i >= 0 ? n1[i] - '0' : 0;
    int digit2 = j >= 0 ? n2[j] - '0' : 0;
    int sum = digit1 + digit2 + carry;
    carry = sum / 10;
    r[k] = '0' + (sum % 10);
  }

  // Return a pointer to the result.
  return r;
}

