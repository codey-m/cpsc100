#include <stdio.h>

void letters(int start, int stop, int step);

int main()
{
    // 1. update letters to return a string
    letters('H', 'Q', 3);

    // 2. create a helper function to print the string returned by letters() in reverse
}

void letters(int start, int stop, int step)
{
    // TODO
    for(int i = start; i <= stop; i+=step) {
        printf("%c ", i);
    }
    printf("\n");
}