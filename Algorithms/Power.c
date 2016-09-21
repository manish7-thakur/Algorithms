/* 
 * File:   Power.c
 * Author: mthakur
 *
 * Created on 21 September, 2016, 12:07 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "nearesttwopower.h"



/*
 * Return a^b
 */

int power(int a, int b) {
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else {
        int m = power(a, b / 2);
        return m*m;
    }
}

int calculate_power(int a, int b) {
    int nearest_power = nearest_power_of_two(b);
    printf("Nearest power %d \n", nearest_power);
    int p = power(a, nearest_power);
    printf("Nearest power p %d \n", p);
    for (int i = 0; i < b - nearest_power; i++) {
        p *= a;
    }
    return p;

}

int main(int argc, char** argv) {
    int a, b;
    printf("%s", "Enter base: ");
    scanf("%d", &a);
    printf("%s", "Enter exponent: ");
    scanf("%d", &b);
    printf("power of %d raised to %d is %d : ", a, b, calculate_power(a, b));

    return (EXIT_SUCCESS);
}

