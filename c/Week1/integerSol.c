#include <stdio.h>

void integers(int start, int stop, int step);

int main()
{
    // complete helper function integers to print out all integers from 1 to 20 -- what kind of loop?
    //      -> eg, for / while / do while?

    // how can we generalize this helper function:
    // 1. to print up to any integer?
    // 2. to print any range of integers?
    // 3. to print any range of integers, counting by any integer
    //      -> eg, integers from 5 to 30, counting by 5's?

    integers(5, 30, 5);
}

void integers(int start, int stop, int step)
{
    // TODO
    for (int i = start; i <= stop; i+=count) {
        printf("%i ", i);
    }
    printf("\n");
}