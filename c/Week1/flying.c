#include <cs50.h>
#include <stdio.h>

void printSpaces(int num);

int main(void)
{
    // get V size from user
    int height;
    do 
    {
        height = get_int("number of birds: ");
    } while(height < 1 || height > 10);
    // declare bird string
    string bird = "🐥";
    // printf("%s\n",bird);

    // TODO: print birds in flying V formation... eg,
    // 🐥
    //   🐥
    // 🐥
}

void printSpaces(int num)
{
    // TODO: function that will print "num" number of spaces
}
