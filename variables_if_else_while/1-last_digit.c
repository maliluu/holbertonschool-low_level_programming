#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines whether the last digit of a random number is greater than 5,
 *        less than 6, or 0.
 *
 * Return: 0 (Success).
 */
int main(void) {
    int number, last_digit;

    srand(time(0));
    number = rand() - RAND_MAX / 2;

    /* Calculate the last digit */
    last_digit = number % 10;

    /* Print the result based on the last digit */
    if (last_digit > 5) {
        printf("Last digit of %d is %d and is greater than 5\n", number,
               last_digit);
    } else if (last_digit == 0) {
        printf("Last digit of %d is %d and is 0\n", number, last_digit);
    } else {
        printf("Last digit of %d is %d and is less than 6 and not 0\n",
               number, last_digit);
    }

    return 0;
}
