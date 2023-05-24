//
// Created by davii on 2023-05-05.
//

#ifndef LABB2_SELINSSORT_H
#define LABB2_SELINSSORT_H

#include <algorithm>

struct Selection_Sort{
    const std::string name = "Selection_Sort";
    void selection_sort(int* begin, int* end  );
    void operator()(int* begin, int* end);
};



struct Insertion_Sort{
    const std::string name = "Insertion_Sort";
    void insertion_sort(int* begin, int * end);
    void operator()(int* begin, int* end);
};





struct Std_Sort{
    const std::string name = "std::sort";
    void std_sort(int *begin, int* end);
    void operator()(int* begin, int* end);
};


#endif //LABB2_SELINSSORT_H
