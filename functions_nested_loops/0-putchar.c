#include <stdio.h>

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
  char str[9] = "_putchar";
  int i;

  for (i = 0; str[i] != '\0'; i++)
  {
    putchar(str[i]);
  }
  putchar('\n');
  return (0);
}
