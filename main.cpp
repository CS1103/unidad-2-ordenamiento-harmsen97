#include <iostream>
#include <vector>
#include <deque>
#include <list>

#include "quickSort.h"
#include "mergeSort.h"

int main(){

    std::vector<int> vec1 = {2,4,6,1,3,7};
    print(vec1);

    quickSort(vec1, 0, vec1.size()-1);
    print(vec1);






    return 0;
}