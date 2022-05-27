// function practice!
// rewrite parts of this main code to use a function
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const int SZ = 15;

bool check_P(int arr[], int num);

int main() {

    // TODO: collect fraction values
    double num;
    double denom;
    do {
        num = get_double("numerator: ");
        denom = get_double("denominator: ");
    } while (num >= denom);

    // TODO: create array
    double res = num / denom;
    int arr[SZ];
    for (int i = 0; i < SZ; i++) {
        arr[i] = res * 10;
        res = res * 10 - arr[i];
    }

    // TODO: print array
    for (int i = 0; i < SZ; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");

    // TODO: check for repeats (eg, 4/11 has period 2)
    for (int i = 1; i < 7; i++) {
        if (check_P(arr, i)){
            printf("periodicity is %i\n", i);
            exit(0);
        }
    }
}

bool check_P(int arr[], int num){
    for (int i = 0; i < num; i++) {
        if (arr[i] != arr[i+num]) {
            return false;
        }
    }
    return true;
}