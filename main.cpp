#include <iostream>
#include <vector>
#include <deque>
#include <list>


#include "Sort.h"
#include "auxFunctions.h"

int main(){

    std::vector<int> vec1 = {9,8,7,6,5,4,3,2,1,0};
    Sort <int> A(vec1);
    A.print();




    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchMerge(A)<<std::endl;

    A.print();

//utilizar iteradores
//necesita recibir archivos



    return 0;
}