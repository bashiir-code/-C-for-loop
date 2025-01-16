/* Modify the program so that it will print even-numbers in reverse order:
 *   value of a is now 8
 *   value of a is now 6
 *   value of a is now 4
 * down to zero.
 */

#include <stdio.h>

int main(void)
{
    int a; // Declare the variable 'a'

    // Start a for loop with 'a' initialized to 9, decrementing by 1 until 'a' >= 0
    for (a = 9; a >= 0; a--) {
        // Check if 'a' is odd using the modulus operator
        if (a % 2 == 1)
            continue; // Skip the rest of the loop and proceed to the next iteration if 'a' is odd

        // Print the current value of 'a' (even numbers only)
        printf("value of a is now %d\n", a);
    }

    return 0; // End of the program
}
