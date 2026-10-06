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
    // static, so the array still exists after this function returns
    // (an ordinary local array is gone once letters() ends)
    static char tmp[27];    // at most 26 letters, plus the '\0' that ends every string
    int index = 0;
    for (int i = start; i <= stop; i += step) {
        tmp[index] = i;
        index++;
    }
    tmp[index] = '\0';
    return tmp;
}

void reverse(string str) {
    for (int i = strlen(str) - 1; i >= 0; i--){
        printf("%c ", str[i]);
    }
    printf("\n");
}
