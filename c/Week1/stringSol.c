#include <stdio.h>
#include <cs50.h>
#include <string.h>

string letters(int start, int stop, int step);
void reverse(string str);

int main()
{
    // 1. update letters to return a string
    string str = letters('H', 'Q', 3);
    printf("%s\n", str);

    // 2. create a helper function to print the string returned by letters() in reverse
    reverse(str);
}

string letters(int start, int stop, int step)
{
    // TODO
    int num = (stop - start) / step;
    char tmp[num];
    for(int i = start, index = 0; i <= stop; i+=step) {
        tmp[index] = i;
        index++;
    }
    string ret = tmp;
    return ret;
}

void reverse(string str) {
    for (int i = strlen(str) - 1; i >= 0; i--){
        printf("%c ", str[i]);
    }
    printf("\n");
}
