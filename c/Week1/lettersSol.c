#include <stdio.h>

void letters(int start, int stop, int step);

int main()
{
    // complete helper function letters to print the entire alphabet

    // how can we generalize this helper function:
    // 1. to print the alphabet up to a specified letter?
    // 2. to print any range of letters in the alphabet?
    // 3. to print any range of letters, counting by any integer?
    //      -> eg, every third letter from H to Q?
    letters('H', 'Q', 3);
}

void letters(int start, int stop, int step)
{
    // TODO
    for(int i = start; i <= stop; i+=step) {
        printf("%c ", i);
    }
    printf("\n");
}