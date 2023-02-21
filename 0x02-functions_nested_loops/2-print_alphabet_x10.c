#include <stdio.h>

void print_alphabet_x10(void) {
    char letter = 'a';
    int i = 0;
    while (i < 10) {
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }
        letter = 'a'; // reset letter to 'a' for the next loop
        i++;
    }
    _putchar('\n');
}

