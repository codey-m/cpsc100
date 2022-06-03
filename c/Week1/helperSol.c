// WE WILL WRITE OUR OWN STRING HELPER METHODS!
// DO NOT IMPORT ADDITIONAL LIBRARIES FOR THIS EXERCISE
#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

// TODO: update helper prototypes with parameter and return types
// HINT: check the CS50 manual for reference!
bool isAlpha(char ch);
char toUpper(char ch);
int strLen(string s);
char printBool(bool b);

int main()
{
    // TODO: write tests for each of your methods as you complete them
    printf("a to A? -> %c\n", toUpper('a'));
    // printf("a is alpha? -> %i\n", isAlpha('a'));
    // printf("1 is alpha? -> %i\n", isAlpha(1));

    printf("a is alpha? -> %c\n", printBool(isAlpha('a')));
    printf("1 is alpha? -> %c\n", printBool(isAlpha(1)));


    string str = get_string("test string: ");
    printf("length of string is %i\n", strLen(str));
}

char printBool(bool b)
{
    if (b)
    {
        return 84;
    }
    return 70;
}
bool isAlpha(char ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }
    return ch;
}

int strLen(string s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
