/*
 * File:   MergeSort.c
 * Author: mthakur
 *
 * Created on 29 September, 2016, 12:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */


void merge(int a[], int start, int middile, int endIndex) {

    int left_size = middile - start + 1;
    int left[left_size];
    int right_size = endIndex - middile;
    int right[right_size];

    int k = start ;
    int s = 0;
    int l = 0;

    for(int i = 0; i < left_size; i++){
        left[i] = a[start + i];
    } 
    for(int i = 0; i < right_size; i++){
        right[i] = a[middile + 1+ i];
    }


    while (s < left_size && l < right_size) {
        if (left[s] <= right[l]) {
            a[k] = left[s];
            s++;
        } else {
            a[k] = right[l];
            l++;
        }
        k++;
    }
    while (l < right_size) {
        a[k] = right[l];
        l++;
        k++;
    }
    while (s < left_size) {
        a[k] = left[s];
        s++;
        k++;
    }
}

void merge_sort(int a[], int start, int endIndex) {
    if (start == endIndex) return;
        int mid = (start + endIndex) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, endIndex);
        merge(a, start, mid, endIndex);
}

/*
int main(int argc, char** argv) {

    int a[] = {675, 78, 35, 34, 756, 45, 24, 54, 47, 48};
    int asize = sizeof (a) / sizeof (a[0]);
    merge_sort(a, 0, asize - 1);
    for (int i = 0; i < asize; i++)
        printf("%d\t", a[i]);
    return (EXIT_SUCCESS);
}
*/

