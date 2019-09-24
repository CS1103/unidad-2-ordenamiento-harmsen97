//
// Created by Jeronimo on 2019-09-23.
//

#ifndef ORDENAR_QUICKSORT_H
#define ORDENAR_QUICKSORT_H

#include <vector>
#include <iostream>

#include "auxFunctions.h"

template <typename T>
int partition(std::vector<T>& values, int p, int r){
    T x = values[r];
    int i = p -1;

    for(int j = p; j<=r-1; j++){

        if(values[j]<=x){
            i++;
            swap(values[i], values[j]);
        }
    }
    swap(values[i + 1], values[r]);
    return i+1;
}



template <typename T>
void quickSort(std::vector<T>& values, int p, int r){

    if (p < r){
        int q = partition(values, p, r);
        quickSort(values, p, q-1);
        quickSort(values, q, r);

    }



}


#endif //ORDENAR_QUICKSORT_H
