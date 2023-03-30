#include "HyperSpaceDistance.h"

HyperSpaceDistance::HyperSpaceDistance()
{
    //ctor
}

HyperSpaceDistance::~HyperSpaceDistance()
{
    //dtor
}

double HyperSpaceDistance::getEuclidian(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double r = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        r += ( (x[i] - y[i]) * (x[i] - y[i]) );
    }

    return sqrt(r);
}

double HyperSpaceDistance::getManhattan(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double r = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        r += abs(x[i] - y[i]);
    }

    return r;
}

double HyperSpaceDistance::getChebyshev(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double r = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        if (abs(x[i] - y[i]) > r)
            r = abs(x[i] - y[i]);
    }

    return r;
}

double HyperSpaceDistance::getPearson(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double _x = 0.0;
    double _y = 0.0;

    for(long i=0; i<x.size(); i++)
    {
        _x += x[i];
        _y += y[i];
    }

    _x = _x / (double)x.size();
    _y = _y / (double)y.size();

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double r = 0.0;

    for(long i=0; i<x.size(); i++)
    {
        a += (x[i] - _x) * (y[i] - _y);
        b += (x[i] - _x) * (x[i] - _x);
        c += (y[i] - _y) * (y[i] - _y);
    }

    b = sqrt(b);
    c = sqrt(c);
    r = a/(b*c);

    return r;
}

double HyperSpaceDistance::getCosineSimilarity(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double r = 0.0;

    for(long i=0; i<x.size(); i++)
    {
        a += (x[i] * y[i]);
        b += (x[i] * x[i]);
        c += (y[i] * y[i]);
    }

    b = sqrt(b);
    c = sqrt(c);
    r = a/(b*c);

    return r;
}

double HyperSpaceDistance::getMahalanobis(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double _x = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        _x += x[i];
    }
    _x = _x / (double)x.size();

    double d = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        d += (x[i] * x[i]);
    }
    d = sqrt(d / (double)x.size());

    double r = 0.0;
    for(long i=0; i<x.size(); i++)
    {
        r += (x[i] -y[i]) * (x[i] -y[i]) / (d*d);
    }

    return sqrt(r);
}

double HyperSpaceDistance::getJensenShannon(vector<double>x, vector<double>y)
{
    if(x.size() != y.size())
        return 0.0;

    double a = 0.0;
    double b = 0.0;
    double r = 0.0;

    for(long i=0; i<x.size(); i++)
    {
        a += x[i]*log( 2*x[i] / (x[i]+y[i]) );

        b += y[i]*log( 2*y[i] / (x[i]+y[i]) );
    }

    r = (a + b) / 2.0;

    return r;
}

double HyperSpaceDistance::getHamming(bitset<32> x, bitset<32> y)
{
    if(x.size() != y.size())
        return 0.0;

    return 0.0;
}


