// array practice!
// find the period of a repeating decimal, eg, 4/11 = 0.363636... has period 2
#include <cs50.h>
#include <stdio.h>

const int SZ = 15;

bool check_P(int arr[], int num);

int main() {

    // TODO: collect fraction values
    double num;
    double denom;
    do {
        num = get_double("numerator: ");
        denom = get_double("denominator: ");
    } while (num < 0 || denom <= 0 || num >= denom);

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
    // a period of i needs 2 * i digits to compare, so i can be at most SZ / 2
    for (int i = 1; i <= SZ / 2; i++) {
        if (check_P(arr, i)){
            printf("periodicity is %i\n", i);
            return 0;
        }
    }
    printf("no period found in the first %i digits\n", SZ);
}

bool check_P(int arr[], int num){
    for (int i = 0; i < num; i++) {
        if (arr[i] != arr[i+num]) {
            return false;
        }
    }
    return true;
}