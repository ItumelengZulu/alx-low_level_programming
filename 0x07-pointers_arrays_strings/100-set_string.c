/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char
 * @to: Pointer to the char to set the value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to; /* Set the value of the pointer s to the address in to */
}

