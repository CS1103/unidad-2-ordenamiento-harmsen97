//
// Created by utec on 19/09/19.
//

#ifndef ORDENAR_SORT_H
#define ORDENAR_SORT_H

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>





template <typename T>

class Sort{
private:




    void mergeSort( int p, int r);

    void merge( int p, int q, int r);

    void quickSort( int p, int r);

    int partition( int p, int r);

    void heapify( int n, int i);

public:
//interfaces
    std::vector<T> values;

    Sort(std::vector<T> values){
        this->values = values;
    }

    void MergeSort(){
        mergeSort(0,values.size()-1);
    }

    void QuickSort(){
        quickSort(0, values.size()-1);
    }

    void HeapSort();

    void ShellSort();

    void print(){
        for (auto & i:values)
            std::cout<<i<<" ";
        std::cout<<std::endl;
    }










    //esto es para utilizar el bestcase y worstcase

    void bestCaseGenerator(int n){
        this->values.clear();
        for(T i = 0; i < n;++i)
            values.push_back(i);
    }

    void worstCaseGenerator(int n){
        this->values.clear();
        for(T i = n-1; i >= 0 ;--i)
            values.push_back(i);
    }

    void randomGenerator(int n){
        values.clear();
        for(int i = 0; i < n-1;++i)
            values.push_back(rand()%10);
    }
};

//libreria artesanal para que funcionen los templates

template class Sort<int>;
template class Sort<unsigned int>;
template class Sort<long int>;
template class Sort<long long int>;
template class Sort<unsigned long int>;
template class Sort<unsigned long long int>;
template class Sort<char>;
//template class Sort<std::string>;
template class Sort<double>;
template class Sort<float>;


#endif //ORDENAR_SORT_H
