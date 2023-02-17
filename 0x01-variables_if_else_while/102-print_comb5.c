#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // First digit of first number
            putchar('0' + (i / 10));
            // Second digit of first number
            putchar('0' + (i % 10));
            // Space between the two numbers
            putchar(' ');
            // First digit of second number
            putchar('0' + (j / 10));
            // Second digit of second number
            putchar('0' + (j % 10));
            // Comma and space between combinations
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

