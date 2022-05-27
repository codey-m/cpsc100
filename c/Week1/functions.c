// function practice!
// rewrite parts of this main code to use a function
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main() {

    printf("Here's some information about fictional characters who went to Yale!\n\n");
    int num;
    string name;
    int year;
    string major;
    string college;
    string sub_pronoun;
    string pos_pronoun;

    num = 1;
    name = "Rory Gilmore";
    year = 2007;
    major = "English";
    college = "Branford";
    sub_pronoun = "She";
    pos_pronoun = "Her";
    printf("Person %d: %s '%02d.\n", num, name, year % 100);
    if (strcmp(major, "None") != 0) {
        printf("%s majored in %s.\n", sub_pronoun, major);
    }
    else {
        printf("%s major was unknown.\n", pos_pronoun);
    }
    if (strcmp(college, "None") != 0) {
        printf("%s was a member of %s College.\n", sub_pronoun, college);
    }

    printf("\n");

    num++;
    name = "Nick Carraway";
    year = 1915;
    major = "None";
    college = "None";
    sub_pronoun = "He";
    pos_pronoun = "His";
    printf("Person %d: %s '%02d.\n", num, name, year % 100);
    if (strcmp(major, "None") != 0) {
        printf("%s majored in %s.\n", sub_pronoun, major);
    }
    else {
        printf("%s major was unknown.\n", pos_pronoun);
    }
    if (strcmp(college, "None") != 0) {
        printf("%s was a member of %s College.\n", sub_pronoun, college);
    }

    printf("\n");

    num++;
    name = "Quinn Fabray";
    year = 2016;
    major = "None";
    college = "None";
    sub_pronoun = "She";
    pos_pronoun = "Her";
    printf("Person %d: %s '%02d.\n", num, name, year % 100);
    if (strcmp(major, "None") != 0) {
        printf("%s majored in %s.\n", sub_pronoun, major);
    }
    else {
        printf("%s major was unknown.\n", pos_pronoun);
    }
    if (strcmp(college, "None") != 0) {
        printf("%s was a member of %s College.\n", sub_pronoun, college);
    }

     printf("\n");

    num++;
    name = "Peter Brand";
    year = 1995;
    major = "economics";
    college = "None";
    sub_pronoun = "He";
    pos_pronoun = "His";
    printf("Person %d: %s '%02d.\n", num, name, year % 100);
    if (strcmp(major, "None") != 0) {
        printf("%s majored in %s.\n", sub_pronoun, major);
    }
    else {
        printf("%s major was unknown.\n", pos_pronoun);
    }
    if (strcmp(college, "None") != 0) {
        printf("%s was a member of %s College.\n", sub_pronoun, college);
    }

    printf("\n");

    num++;
    name = "Taylor McKessie";
    year = 2008;
    major = "Political Science";
    college = "None";
    sub_pronoun = "She";
    pos_pronoun = "Her";
    printf("Person %d: %s '%02d.\n", num, name, year % 100);
    if (strcmp(major, "None") != 0) {
        printf("%s majored in %s.\n", sub_pronoun, major);
    }
    else {
        printf("%s major was unknown.\n", pos_pronoun);
    }
    if (strcmp(college, "None") != 0) {
        printf("%s was a member of %s College.\n", sub_pronoun, college);
    }

     printf("\n");

    return 0;
}
