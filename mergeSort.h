//
// Created by Jeronimo on 2019-09-24.
//

#ifndef ORDENAR_MERGESORT_H
#define ORDENAR_MERGESORT_H

#include <vector>
#include <iostream>
#include <cmath>

#include "auxFunctions.h"



template <typename T>
void merge(std::vector<T> &values, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    std::vector<T> left(n1 + 1), right(n2 + 1);
    for (int i = 0; i < n1; i++)
        left[i] = values[p + i];
    for (int j = 0; j < n2; j++)
        right[j] = values[q + j + 1];

    left[n1] = INFINITY;
    right[n2] = INFINITY;

    int i = 0,j = 0;

    for (int k = p; k <= r; k++){
        if (left[i] <= right[j]){
            values[k] = left[i];
            i++;
        }
        else {
            values[k] = right[j];
            j++;
        }

    }
}



template <typename T>
void mergeSort(std::vector<T> &values, int p, int r){
    if(p<r){
        int q= floor((p+r)/2);
        mergeSort(values, p, q);
        mergeSort(values, q+1, r);
        merge(values, p, q, r);
    }
}








#endif //ORDENAR_MERGESORT_H
