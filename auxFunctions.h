//
// Created by Jeronimo on 2019-09-24.
//

#ifndef ORDENAR_AUXFUNCTIONS_H
#define ORDENAR_AUXFUNCTIONS_H


#include <iomanip>


#include "Sort.h"

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}



template <typename T>
void print(std::vector<T> &values){
    for (auto & i:values)
        std::cout<<i<<" ";
    std::cout<<std::endl;
}

template <typename T>
double stopWatchMerge(Sort <T>& sort){
    clock_t start = clock();
    sort.MergeSort();
    clock_t end = clock();
    return ((double )(end - start)/CLOCKS_PER_SEC);
}
#endif //ORDENAR_AUXFUNCTIONS_H
