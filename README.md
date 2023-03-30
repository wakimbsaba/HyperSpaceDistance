# Hyper Space distances


[![License](http://img.shields.io/:license-Apache%202-blue.svg)](http://www.apache.org/licenses/LICENSE-2.0.txt)

An implementation of a list of method to get the distance between two points of a hyper space 
written in C/C++ language, in a code::block windows project.

This implementation was created for academic use, but can be [adapted] for commercial usage. 

## Methods

The distance of two points can be get from a variety of ways. For example:

Euclidian Distance:

$$ distance_{xy} = sqrt{\left( \sum_{k=1}^n \left(x_k - y_k \right)^2  \right)}$$

Manhattan Distance:

$$ distance_{xy} = \sum_{k=1}^n abs{ \left(x_k - y_k \right)}  $$

Chebyshev Distance:

$$ distance_{xy} =  \max_{k=1}^n \left(abs{ \left(x_k - y_k \right)}  \right)$$


## Use Cases

Use this for:

- If you just want a simple, fast, general implementation
- High-latency applications
- Easy to use code to test concepts and modify easily


## Compilation

```
g++.exe -Wall -fexceptions -g -std=c++0x -Iinclude -c src\HyperSpaceDistance.cpp -o obj\Debug\src\HyperSpaceDistance.o
g++.exe  -o bin\Debug\HyperSpaceDistances.exe obj\Debug\main.o obj\Debug\src\HyperSpaceDistance.o   
```


## Usage

Simple usage:

```c++
int main()
{

    HyperSpaceDistance *hy = new HyperSpaceDistance();

    double r = hy->getPearson(x,y);
    double e = hy->getEuclidian(x,y);
    double mn = hy->getManhattan(x,y);
    double ms = hy->getMahalanobis(x,y);
    double js = hy->getJensenShannon(x,y);
    double c = hy->getCosineSimilarity(x,y);


    return 0;
}

```


# Execution Example

  This is an example by executing this code:
``` 
-------------------------------------------
x[0]: 747.956
x[1]: -381.142
-------------------------------------------
y[0]: 249.402
y[1]: -183.737
-------------------------------------------
-------------------------------------------
 PEARSON distance: 1
 0.9 or more means VERY STRONG correlation
 0.7 a 0.9 positive or negative, means STRONG correlation
 0.5 a 0.7 positive or negative, means MODERATED correlation
 0.3 a 0.5 positive or negative, means WEAK correlation
 0.0 a 0.3 positive or negative, means VERY WEAK correlation
-------------------------------------------
 EUCLIDIAN distance: 536.213
-------------------------------------------
 MANHATTAN distance: 695.958
-------------------------------------------
 MAHALANOBIS distance: 0.903333
-------------------------------------------
 JENSEN SHANNON distance: 47.5831
-------------------------------------------
 COSINE SIMILARITIES: 0.986637
 cosine similarity always belongs to the interval [-1, 1]
 1 , means two proportional vectors
 0 , means two orthogonal vectors
-1 , means two opposite vectors
-------------------------------------------
```


## References:

[1.] [Conjugate gradient method](<https://en.wikipedia.org/wiki/Conjugate_gradient_method> "Wikipedia:Conjugate gradient method")

[2.] [Random Normal Distribuition](<https://cplusplus.com/reference/random/normal_distribution/> "cplusplus:nomal distribution")

