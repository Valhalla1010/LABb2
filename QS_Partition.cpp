//
// Created by davii on 2023-05-06.
//
#include <algorithm>
#include <stack>

#include "QS_Partition.h"


int *Q_Sort_Partition::partition(int *begin, int *end) {
    int pivot = *end;

    int* i = begin - 1;

    for(int* j = begin; j <= end - 1; j++)
    {
        if(*j <= pivot)
        {
            i++;
            std::swap(*i, *j);
        }
    }

    std::swap(*(i + 1), *end);

    return i + 1 ;

}


void Q_Sort_Partition::quick_sort(int *begin, int *end) {
    /*if(begin < end){
        auto piv = partition(begin, end);
        quick_sort(begin, piv - 1);
        quick_sort(piv + 1, end);

    }*/
    if(begin > end) return;

    auto pivot = partition(begin, end);

    quick_sort(begin, pivot - 1);
    quick_sort(pivot + 1, end);
}




void Q_Sort_Partition::operator()(int *begin, int *end) {
    quick_sort(begin, end);
}



