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

$$ distance_{xy} = \left( \sum_{k=1}^n abs{ \left(x_k - y_k \right)}  \right)$$



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
    return 0;
}

```


# Execution Example

  This is an example by executing this code:
``` 
-------------------------------------------
EXECUTING ...
```


## References:

[1.] [Conjugate gradient method](<https://en.wikipedia.org/wiki/Conjugate_gradient_method> "Wikipedia:Conjugate gradient method")

[2.] [Random Normal Distribuition](<https://cplusplus.com/reference/random/normal_distribution/> "cplusplus:nomal distribution")

