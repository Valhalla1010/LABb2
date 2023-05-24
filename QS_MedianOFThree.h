//
// Created by davii on 2023-05-06.
//

#ifndef LABB2_QS_MEDIANOFTHREE_H
#define LABB2_QS_MEDIANOFTHREE_H
#include <string>
#include <vector>

struct Q_Sort_MF3{
    const std::string name = "Quick_Sort_MedianOfThree";
     int MedianOf3(int* begin, int* end);
     int* partition(int* begin, int* end, int pivot);
    void Quick_sort(int* begin, int* end);
     void operator()(int *begin, int *end);

};


#endif //LABB2_QS_MEDIANOFTHREE_H
