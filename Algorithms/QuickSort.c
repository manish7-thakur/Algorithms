/* 
 * File:   QuickSort.c
 * Author: mthakur
 *
 * Created on 14 October, 2016, 2:34 PM
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int p, int q) {
    int pivot = a[p];
    int i = p;
    int j = p + 1;
    while (j <= q) {
        if (a[j] <= pivot) {
            i++;
            swap(a, i, j);
        }
        j++;
    }
    swap(a, p, i);
    return i;
}

void quick_sort(int a[], int p, int q) {
    if (p < q) {
        int mid = partition(a, p, q);
        quick_sort(a, p, mid - 1);
        quick_sort(a, mid + 1, q);
    }
    return;
}

int main(int argc, char **argv) {
    int a[] = {675, 78, -1, 0, 35, 34, 756, 45, 24, 54, 47, 48};
    int asize = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, asize - 1);
    for (int i = 0; i < asize; i++)
        printf("\t %d", a[i]);
    return (EXIT_SUCCESS);
}

