/* 
 * File:   HotelRoomsAndBed.c
 * Author: mthakur
 *
 * Created on 30 September, 2016, 3:26 PM
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */
struct TypeAndNumber {
    int type;
    int number;
};

struct TypeAndNumber[] calc(int a[], int i, int j, int guest, struct TypeAndNumber res[], int k) {
    int remaining_guest = guest % a[i];
    if(remaining_guest == 0) {
        struct TypeAndNumber tandn;
        tandn.type = a[i];
        tandn.number = guest % a[i];
        res[k++] = tandn;
        return res;
    }
    else {
        calc(a, i+1, j, remaining_guest, res, k);
    }
    
    
}
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

