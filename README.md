# non-linear Conjugate Gradient


[![License](http://img.shields.io/:license-Apache%202-blue.svg)](http://www.apache.org/licenses/LICENSE-2.0.txt)

An implementation of a list of method to get the distance between two points of a hyper space 
written in C/C++ language, in a code::block windows project.

This implementation was created for academic use, but can be [adapted] for commercial usage. 

## Methods

The distance of two points can be get from a variety of ways. For example:

Euclidian Distance:

<img src="https://render.githubusercontent.com/render/math?math=e^{i \pi} = -1">


<img src="https://render.githubusercontent.com/render/math?math={\L = -\sum_{j}[T_{j}ln(O_{j})] + \frac{\lambda W_{ij}^{2}}{2} \rightarrow \text{one-hot} \rightarrow -ln(O_{c}) + \frac{\lambda W_{ij}^{2}}{2}}#gh-light-mode-only">

<img src="https://render.githubusercontent.com/render/math?math={\color{white}\L = -\sum_{j}[T_{j}ln(O_{j})] + \frac{\lambda W_{ij}^{2}}{2} \rightarrow \text{one-hot} \rightarrow -ln(O_{c}) + \frac{\lambda W_{ij}^{2}}{2}}#gh-dark-mode-only">



<p align="center">
  <img src="Algorithm.png">
</p>


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

