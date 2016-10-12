/* 
 * File:   BinarySearch.c
 * Author: mthakur
 *
 * Created on 23 September, 2016, 1:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int start, int end, int element) {
    if (start == end) {
        if (a[start] == element)
            return start;
        else
            return -1;
    } else {
        int mid = (start + end) / 2;
        if (a[mid] == element)
            return mid;
        else {
            if (a[mid] < element)
                return binary_search(a, mid + 1, end, element);
            else
                return binary_search(a, start, mid - 1, element);
        }
    }
    return -1;
}

/*
 * 
 */
/*
int main(int argc, char** argv) {
    int a[] = {1, 2, 3, 4, 6, 7, 9, 39, 50};
    int element = 1;
    printf("Position of element is : %d", binary_search(a, 0, sizeof(a)/sizeof(int) - 1, element));
    return (EXIT_SUCCESS);
}
*/

