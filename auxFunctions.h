

#ifndef ORDENAR_AUXFUNCTIONS_H
#define ORDENAR_AUXFUNCTIONS_H

#include <iomanip>
#include <fstream>
#include <cstring>
#include "Record.h"


template <typename T>
void swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
double stopWatchMerge(Sort<T>& sort){
    clock_t start = clock();
    sort.MergeSort();
    clock_t end = clock();
    return ((double)(end-start)/CLOCKS_PER_SEC);
}

template <typename T>
double stopWatchQuick(Sort<T>& sort){
    clock_t start = clock();
    sort.QuickSort();
    clock_t end = clock();
    return ((double)(end-start)/CLOCKS_PER_SEC);
}

template <typename T>
double stopWatchHeap(Sort <T>& sort){
    clock_t start = clock();
    sort.HeapSort();
    clock_t end = clock();
    return ((double )(end - start)/CLOCKS_PER_SEC);
}

template <typename T>
double stopWatchShell(Sort <T>& sort){
    clock_t start = clock();
    sort.ShellSort();
    clock_t end = clock();
    return ((double )(end - start)/CLOCKS_PER_SEC);
}

#endif //ORDENAR_AUXFUNCTIONS_H