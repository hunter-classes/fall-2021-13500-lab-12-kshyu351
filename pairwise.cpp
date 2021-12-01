#include "pairwise.h" 
#include <vector> 
#include <iostream> 


// Write a program called pairwise.cpp that implements the function 
// vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) that
//  returns a vector of integers whose elements are the pairwise sum of the elements 
//  from the two vectors passed as arguments. If a vector has a smaller size than the other, 
//  consider extra entries from the shorter vectors as 0. Example:

// vector<int> v1{1,2,3};
// vector<int> v2{4,5};

// sumPairWise(v1, v2); // returns [5, 7, 3]


std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) { 
    std::vector<int> v; 
    int v1_size = v1.size();
     int v2_size = v2.size();

     if (v1_size < v2_size) { 
         for (int i = 0; i < v1_size; i++) { 
             int sum = v1[i] + v2[i]; 
             v.push_back(sum);
         }
         for (int j = v1_size; j < v2_size; j++) { 
             v.push_back(v2[j]);
         }
     }
     else if (v2_size < v1_size) { 
          for (int i = 0; i < v2_size; i++) { 
             int sum = v1[i] + v2[i]; 
             v.push_back(sum);
         }
         for (int j = v2_size; j < v1_size; j++) { 
             v.push_back(v1[j]);
         }
     }
     else { 
         for (int i = 0; i < v1_size; i++) { 
             int sum = v1[i] + v2[i]; 
              v.push_back(sum);
         }
     }
     return v; 
}




