//
// Created by davii on 2023-05-06.
//
#include "QS_MedianOFThree.h"


int *Q_Sort_MF3::partition(int *begin, int *end, int pivot) {
  /*int *i=begin;

   for(int* j = begin; j != end; j++){
       if(*j > pivot){
           i++;
           std::swap(*i, *j);
       }
   }
    std::swap(*i, *end);
    return i;*/

  //stigande
    /*pivot = *end;

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

    return i + 1 ;*/

    int* i = begin;
    int* j = end - 1;

    while (true) {
        while (*i < pivot)
            i++;

        while (*j > pivot)
            j--;

        if (i >= j)
            return i;

        std::swap(*i, *j);
        i++;
        j--;
    }
}

int Q_Sort_MF3::MedianOf3(int *begin, int *end) {
    int *mid =  begin + (end - begin) /2;

    if( *mid < *begin)   std::swap( *begin,*mid);
    if( *end < *begin)   std::swap(*end, *begin);
    if(*mid < *end)     std::swap( *end,*mid);

    return *end;
}






void Q_Sort_MF3::Quick_sort(int *begin, int *end) {
    //stigande
    /*if(begin < end)
    {
        //int pivot = MedianOf3(begin, end);
        int *pivot_pos = partition(begin, end, MedianOf3(begin,end));
        Quick_sort(begin, pivot_pos -1 );
        Quick_sort(pivot_pos+1, end);
    }*/
    if (begin < end) {
        int pivot = MedianOf3(begin, end);
        int *pivot_pos = partition(begin, end, pivot);
        Quick_sort(begin, pivot_pos- 1);
        Quick_sort(pivot_pos + 1, end);
    }
}


void Q_Sort_MF3::operator()(int *begin, int *end) {
    Quick_sort(begin, end);
}

