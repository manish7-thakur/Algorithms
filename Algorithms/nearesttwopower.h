/* 
 * File:   NearestTwoPower.h
 * Author: mthakur
 *
 * Created on 21 September, 2016, 2:18 PM
 */

#ifndef NEARESTTWOPOWER_H
#define	NEARESTTWOPOWER_H

#ifdef	__cplusplus
extern "C" {
#endif

    
/*
 * finds the nearest power of 2 number less than the given number.
 */
int nearest_power_of_two(int n) {
    int nearest = 1;
    while(nearest <= n){
    if(nearest * 2 > n)
        return nearest;
    else
        nearest *=2;
    }
}


#ifdef	__cplusplus
}
#endif

#endif	/* NEARESTTWOPOWER_H */

