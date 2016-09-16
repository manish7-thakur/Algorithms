/* 
 * File:   main.c
 * Author: mthakur
 *
 * Created on September 16, 2016, 1:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
unsigned long lookUp[100];

unsigned long fibonacciSumTillTerm(long n) {
    if (lookUp[n] == -1) {
        if (n <= 1) {
            lookUp[n] = n;
        } else {
            lookUp[n - 1] = fibonacciSumTillTerm(n - 1);
            lookUp[n - 2] = fibonacciSumTillTerm(n - 2);
            lookUp[n] = lookUp[n - 1] + lookUp[n - 2];
        }
    }
    return lookUp[n];
}

int main(int argc, char** argv) {

    for (int i = 0; i < 100; i++) lookUp[i] = -1;
    printf("%s", "Enter the term");
    unsigned long n;
    scanf("%lu", &n);
    long sum = fibonacciSumTillTerm(n);
    printf("%lu", sum);
    return (EXIT_SUCCESS);
}

