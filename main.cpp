#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <fstream>


#include "Record.h"
#include "Sort.h"
#include "auxFunctions.h"

std::vector<Record*> read_csv(std::string filename){
    char szbuffer[1024];
    std::vector<Record*> records;

    FILE* pfile;
    pfile = fopen("../res/commodity_trade_statistics_data.csv", "r");

    size_t size;
    do{
        memset(szbuffer, 0, 1024);
        fgets(szbuffer, 500, pfile);
        if(strlen(szbuffer)>0){
            auto* pcountry = new Record;
            char* pch;
            int i = 0;
            pch = strtok(szbuffer, ",");
            while(pch != NULL){
                i++;
                char* pend;
                if(i==1)
                    pcountry->country_or_area = pch;
                else if(i==2)
                    pcountry->year = strtod(pch, &pend);
                else if(i==3)
                    pcountry->commodity = pch;
                else if(i==4)
                    pcountry->flow = pch;
                else if(i==5)
                    pcountry->trade_usd = strtod(pch, &pend);
                pch = strtok(NULL, ",");
            }
            records.push_back(pcountry);
        }
    }while(strlen(szbuffer)>0);
    fclose(pfile);
    return records;
}

int main(){

    /*std::vector<Record*> records = read_csv("../res/commodity_trade_statistics_data.csv");

    std::vector<int> year_vector;
    for(int i = 0; i<1000; ++i)
        year_vector.push_back(records[i]->year);

    Sort<int>s(year_vector);

    s.MergeSort();

    std::fstream out("../results.csv", std::ios::out);
    for(auto&i:s.values)
        out<<i<<'\n';

    out.close();
    return 0;
     */
    int n = 20;
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    srand(time(nullptr));

    Sort<int> s(v1);
    Sort<int> s2(v2);
    Sort<int> s3(v3);

    s.bestCaseGenerator(n);
    s.print();


    std::cout<<"QuickSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchQuick(s)<<std::endl;

    std::cout<<"MergeSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchMerge(s)<<std::endl;
/*
  std::cout<<"HeapSort --->  ";
  std::cout<<std::fixed<<std::setprecision(6)<<stopWatchHeap(s)<<std::endl;

  std::cout<<"ShellSort --->  ";
  std::cout<<std::fixed<<std::setprecision(6)<<stopWatchShell(s)<<std::endl;

   */
    std::cout<<std::endl;

    s2.worstCaseGenerator(n);
    s2.print();

    std::cout<<"QuickSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchQuick(s2)<<std::endl;
    s2.worstCaseGenerator(n);

    std::cout<<"MergeSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchMerge(s2)<<std::endl;
    s2.worstCaseGenerator(n);

    /* std::cout<<"HeapSort --->  ";
     std::cout<<std::fixed<<std::setprecision(6)<<stopWatchHeap(s)<<std::endl;
     s2.worstCaseGenerator(n);

     std::cout<<"ShellSort --->  ";
     std::cout<<std::fixed<<std::setprecision(6)<<stopWatchShell(s)<<std::endl;
     s2.worstCaseGenerator(n);*/


    std::cout<<std::endl;

    s3.randomGenerator(n);
    s3.print();

    std::cout<<"QuickSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchQuick(s2)<<std::endl;
    s3.randomGenerator(n);

    std::cout<<"MergeSort --->  ";
    std::cout<<std::fixed<<std::setprecision(6)<<stopWatchMerge(s2)<<std::endl;
    s3.randomGenerator(n);

    /* std::cout<<"HeapSort --->  ";
     std::cout<<std::fixed<<std::setprecision(6)<<stopWatchHeap(s)<<std::endl;
     s3.randomGenerator(n);

     std::cout<<"ShellSort --->  ";
     std::cout<<std::fixed<<std::setprecision(6)<<stopWatchShell(s)<<std::endl;
     s3.randomGenerator(n);*/


}