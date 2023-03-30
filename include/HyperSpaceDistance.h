#ifndef HYPERSPACEDISTANCE_H
#define HYPERSPACEDISTANCE_H
#include <bitset>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

class HyperSpaceDistance
{
    public:

        HyperSpaceDistance();

        virtual ~HyperSpaceDistance();

        double getEuclidian(vector<double>x, vector<double>y);

        double getManhattan(vector<double>x, vector<double>y);

        double getChebyshev(vector<double>x, vector<double>y);

        double getPearson(vector<double>x, vector<double>y);

        double getCosineSimilarity(vector<double>x, vector<double>y);

        double getMahalanobis(vector<double>x, vector<double>y);

        double getJensenShannon(vector<double>x, vector<double>y);

        double getHamming(bitset<32> x, bitset<32> y);

        double standardError(double pCorelation, double size){return sqrt((1-(pCorelation*pCorelation))/(size-2.0));};


    protected:

    private:
};

#endif // HYPERSPACEDISTANCE_H
