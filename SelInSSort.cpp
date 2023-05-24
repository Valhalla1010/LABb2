//
// Created by davii on 2023-05-05.
//

#include <algorithm>
#include <string>
#include "SelInSSort.h"


void Selection_Sort::selection_sort(int *begin, int *end) {
    for (int* i = begin; i < end; i++ ){
        //hitta mindre element
        int *min_index = i;
        for(int* j = i + 1; j < end; j++) {
            if (*j < *min_index) {
                min_index = j;
            }
        }
            std::swap(*i, *min_index);
    }

}

void Selection_Sort::operator()(int *begin, int *end) {
    selection_sort(begin, end);

}


void Insertion_Sort::insertion_sort(int *begin, int *end) {
    for(int* i = begin + 1; i < end; i++){
        int  key = *i;
        int* j = i -1;
        while(j >= begin && *j > key){
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;

    }

}

void Insertion_Sort::operator()(int *begin, int *end) {
    insertion_sort(begin, end);


}

//c++ algoritm
void Std_Sort::std_sort(int *begin, int *end) {
    std::sort(begin, end);
}


void Std_Sort::operator()(int *begin, int *end) {
    std_sort(begin, end);
}