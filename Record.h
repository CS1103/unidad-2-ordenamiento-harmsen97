//
// Created by Jeronimo on 2019-10-01.
//

#ifndef ORDENAR_RECORD_H
#define ORDENAR_RECORD_H

#include <string>

struct Record {
    std::string country_or_area;
    int year;
    std::string comm_code;
    std::string commodity;
    std::string flow;
    int trade_usd;

    Record()= default;
    Record(std::string country_or_area, int year, std::string comm_code, std::string commodity, std::string flow, int trade_usd){
        this->country_or_area = country_or_area;
        this->year = year;
        this->comm_code = comm_code;
        this->commodity = commodity;
        this->flow = flow;
        this->trade_usd = trade_usd;
    }
};


#endif //ORDENAR_RECORD_H
