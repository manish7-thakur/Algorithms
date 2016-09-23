/* 
 * File:   DACMaxMin.c
 * Author: mthakur
 *
 * Created on 23 September, 2016, 11:52 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void dac_max_min(int a[], int start, int end, int* max, int* min) {
    if (start == end) {
        if (a[start] > *max)
            *max = a[start];
        else if (a[start] < *min)
            *min = a[start];
    } else {
        int mid = (start + end) / 2;
        dac_max_min(a, start, mid, max, min);
        dac_max_min(a, mid + 1, end, max, min);
    }
}

int main(int argc, char** argv) {

    int a[] = {5, 9, 3, 6, 4, 56, 35, 583, 237, 58, 383, 873};
    int max, min;
    max = min = a[0];
    dac_max_min(a, 0, sizeof (a) / sizeof (int) - 1, &max, &min);
    printf("%s %d %d", "The max & min values are : ", max, min);
    return (EXIT_SUCCESS);
}

