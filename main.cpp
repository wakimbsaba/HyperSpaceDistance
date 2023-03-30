#include <iostream>
#include <random>
#include <chrono>
#include <string>
#include "HyperSpaceDistance.h"

using namespace std;

void printVector(vector<double> &xpto, string name)
{
    for(int i=0;i<xpto.size();i++)
        cout<< name<<"["<<i<<"]: "<< xpto[i] << endl;
}

int main()
{
    long N = 2;
    // 1 - RANDOM NUMBER INITIALIZATION
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<double> distribution(-1000.0, +1000.0);

    // 2 - DEFINITION OF DECISION VARIABLE X VECTOR
    vector<double> x(N, 0.0);
    vector<double> y(N, 0.0);
    for(int i=0;i<N;i++)
    {
        x[i] = distribution(generator);
        y[i] = distribution(generator);
    }

    cout<< "-------------------------------------------"<< endl;
    printVector(x, string("x"));
    cout<< "-------------------------------------------"<< endl;
    printVector(y, string("y"));
    cout<< "-------------------------------------------"<< endl;

    HyperSpaceDistance *hy = new HyperSpaceDistance();

    double r = hy->getPearson(x,y);
    double e = hy->getEuclidian(x,y);
    double mn = hy->getManhattan(x,y);
    double ms = hy->getMahalanobis(x,y);
    double js = hy->getJensenShannon(x,y);
    double c = hy->getCosineSimilarity(x,y);

    cout<< "-------------------------------------------"<< endl;
    cout<< " PEARSON distance: " << r << endl;
    cout<< " 0.9 or more means VERY STRONG correlation "<< endl;
    cout<< " 0.7 a 0.9 positive or negative, means STRONG correlation "<< endl;
    cout<< " 0.5 a 0.7 positive or negative, means MODERATED correlation "<< endl;
    cout<< " 0.3 a 0.5 positive or negative, means WEAK correlation "<< endl;
    cout<< " 0.0 a 0.3 positive or negative, means VERY WEAK correlation "<< endl;
    cout<< "-------------------------------------------"<< endl;
    cout<< " EUCLIDIAN distance: " << e  << endl;
    cout<< "-------------------------------------------"<< endl;
    cout<< " MANHATTAN distance: " << mn  << endl;
    cout<< "-------------------------------------------"<< endl;
    cout<< " MAHALANOBIS distance: " << ms  << endl;
    cout<< "-------------------------------------------"<< endl;
    cout<< " JENSEN SHANNON distance: " << js  << endl;
    cout<< "-------------------------------------------"<< endl;
    cout<< " COSINE SIMILARITIES: " << c  << endl;
    cout<< " cosine similarity always belongs to the interval [-1, 1] "<< endl;
    cout<< " 1 , means two proportional vectors "<< endl;
    cout<< " 0 , means two orthogonal vectors "<< endl;
    cout<< "-1 , means two opposite vectors "<< endl;

    cout<< "-------------------------------------------"<< endl;
    cout<< " STANDARD ERROR: " << hy->standardError(r,(double)x.size())<< endl;
    cout<< "-------------------------------------------"<< endl;

    return 0;
}
