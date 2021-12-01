// A big benefit of vectors is their ability to be returned 
// from functions. For this task, program a function called 
// vector<int> makeVector(int n) that returns a vector of n 
// integers that range from 0 to n-1. Call your program vectors.cpp. 
// Your function must be implemented outside the main function and must return a vector.


#include <vector> 
#include <iostream>
#include "vectors.h"

//task A 
std::vector<int> makeVector(int n) { 
    std::vector<int> v; 
    for (int i = 0; i < n; i++) { 
        v.push_back(i); 
    }
    return v;
}

//added own printVector func 
void printVector(std::vector<int> v) { 
    for (int i =0; i < v.size(); i++) { 
        std::cout << v[i] << std::endl; 
    }
}



