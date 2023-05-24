//
// Created by davii on 2023-05-04.
//
#include "generering.h"
#include <algorithm>
#include "QS_MedianOFThree.h"
Generation::Generation(int min,  int max)

        :rng(std::random_device()()), dist(max,min) {

}

std::vector<int> Generation::RandomValue( int N) {
    std::vector<int> arr(N);

    std::for_each(arr.begin(), arr.end(), [this](int &i){
        i = dist(rng);
    });
    return arr;

}



std::vector<int> Generation::ConstantValue( int N) {

    std::vector<int> arr(N);
    int Konst = dist(rng);
    std::for_each(arr.begin(), arr.end(), [&Konst](int& n){
        n = Konst;
    });
    return arr;
}

std::vector<int> Generation::MonotontStigande(const int N) {

    std::vector<int> arr(N);
    std::iota(arr.begin(), arr.end(), dist(rng));
    return arr;
}

std::vector<int> Generation::MonotontFallande( int N) {
    std::vector<int> arr = RandomValue(N);
    std::sort(arr.rbegin(), arr.rend());
    return arr;
}