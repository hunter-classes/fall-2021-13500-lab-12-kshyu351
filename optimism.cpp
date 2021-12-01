#include "optimism.h" 
#include <vector> 
#include <iostream> 

// Make a program called optimism.cpp
//  that implements the function vector<int> goodVibes(const & vector<int> v); 
//  that, given a vector of integers, returns a vector with only the positive 
//  integers in the same order.

//task B 
// std::vector<int> goodVibes(const & std::vector<int> v) { 

std::vector<int> goodVibes(const std::vector<int> &v) { 


     std::vector<int> v2; 
    for (int i = 0; i < v.size(); i++) { 
        if (v[i] > 0) { 
            v2.push_back(v[i]); 
        }
    }
    return v2; 
}
