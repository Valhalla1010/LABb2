//
// Created by davii on 2023-05-04.
//

#ifndef LABB2_OUTPUT_H
#define LABB2_OUTPUT_H
#include<string>
#include <utility>
#include <vector>
#include "generering.h"
#include "TidSTdAv.h"
#include <fstream>
#include <map>
#include <cmath>
#include <chrono>



enum DataType{
    Random,
    stigande,
    fallande,
    Konstant

};
//För att spara namn av datagenerering i fil
const std::map<DataType, std::string> datatypes = {
        {Random, "Random"},
        {Konstant, "Konstant"},
        {stigande, "Stigande"},
        {fallande, "Fallande"}
};

Generation rng(1, std::pow(10,15));
const std::map<DataType, std::function<std::vector<int>(int)>> Generation = {
        {Random, [](int N){
            return rng.RandomValue(N);
        }},
        {stigande, [](int N){
            return rng.MonotontStigande(N);
        }},
        {fallande,[](int N){
            return rng.MonotontFallande(N);
        }},
        {Konstant, [](int N){
            return rng.ConstantValue(N);
        }}
};




template<typename Sort>
void printIfile(Sort sort, DataType datatype, const std::string& filename){


    const int samples =5;
    int start =1000;
    int end = 10000;
    std::ofstream File(filename);
    File << sort.name << " - " << datatypes.at(datatype)<< " data" << "\n";
    File << "N" << "\t\t\t" << "T[ms]" << "\t\t" << "STd_avvikelse[ms]" << "\t\t" <<  "Sample"<<"\n";
    for (int N =start; N <= end ; N += start)
    {
        std::vector<double> times;
        for (int i = 0; i < samples ; i++) {
            std::vector<int> src = Generation.at(datatype)(N);


            //tidmätning
            auto start = std::chrono::high_resolution_clock::now();

            sort(&src.front(), &src.back());
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> duration = end - start;
            times.push_back(duration.count());
            std::cout << times.back() << ", ";
        }
        std::cout << "\n";
        File << N << "\t\t" << Mean(times) << "\t\t" << std_dev(times) << "\t\t\t\t" << samples << "\n";

    }
    //std::vector<double> times;
    //File << N << "\t\t" << Mean(times) << "\t\t" << std_dev(times) << "\t\t\t\t" << samples << "\n";

    std::cout << "\n";
    File.close();
}





#endif //LABB2_OUTPUT_H
