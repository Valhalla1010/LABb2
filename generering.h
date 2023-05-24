//
// Created by davii on 2023-05-04.
//

#ifndef LABB2_GENERERING_H
#define LABB2_GENERERING_H

#include <random>
#include <vector>



class Generation{
private:
    /*long long min_;
    long long max_;
    //Skapa en mt19937-generator med seed från systemets klocka
    std::mt19937 generator(std::random_device());
    //generera slumpmässiga tal*/
    std::mt19937 rng;
    std::uniform_int_distribution<int> dist;
public:
    Generation( int min, int max);

    std::vector<int> RandomValue( int N);

    std::vector<int> ConstantValue( int N);

    std::vector<int> MonotontStigande(const int N);

    std::vector<int> MonotontFallande( int N);

};


#endif //LABB2_GENERERING_H
