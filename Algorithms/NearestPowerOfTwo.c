/* 
 * File:   NearestPowerOfTwo.c
 * Author: mthakur
 *
 * Created on 21 September, 2016, 12:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
//#include "nearesttwopower.h"

int main2(int argc, char** argv) {
    int n;
    printf("%s", "Enter number : ");
    scanf("%d", &n);
    printf("%s %d", "Nearest power of 2 number is : ", nearest_power_of_two(n));
    return (EXIT_SUCCESS);
}

