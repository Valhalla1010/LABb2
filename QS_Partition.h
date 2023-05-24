//
// Created by davii on 2023-05-06.
//

#ifndef LABB2_QS_PARTITION_H
#define LABB2_QS_PARTITION_H
#include <string>
struct Q_Sort_Partition{
    const std::string name = "Quick_Sort_Partition";
    int* partition(int* begin, int* end);
    void quick_sort(int* begin, int* end);
    void operator()(int* begin, int* end);
};


#endif //LABB2_QS_PARTITION_H
