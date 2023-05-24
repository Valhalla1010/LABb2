//
// Created by davii on 2023-05-04.
//






#include <cmath>
#include <numeric>
#include "TidSTdAv.h"


//medelvärde
double Mean(std::vector<double> Times) {

    double sum = std::accumulate(Times.begin(), Times.end(), 0.0);
    return sum /Times.size();

}

//Felanalys
double std_dev(std::vector<double> Times)
{
    double avg = Mean(Times);

    double square_sum = std::accumulate(Times.begin(), Times.end(), 0.0, [&avg](double sum, double val)
    {
        return sum += std::pow(val - avg, 2);
    });

    double ret = std::sqrt(1.0 / (Times.size() - 1) * square_sum);

    return ret;
}

