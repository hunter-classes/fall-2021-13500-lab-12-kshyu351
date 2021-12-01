#include <iostream> 
#include "vectors.h"
#include "fusion.h"
#include "optimism.h"
#include "pairwise.h"
#include <vector> 


int main() { 

    //task A 
    std::vector<int> v = makeVector(4);
    std::cout << "Testing task A:\n";
    printVector(v); 

    //task B 
    std::cout << "Testing task B:\n";
   std::vector<int> v1 = makeVector(7);
   v1[0] = 1; 
   v1[1] = 2; 
   v1[2] = -1; 
   v1[3] = 3; 
   v1[4] = 4; 
   v1[5] = -1; 
   v1[6] = 6; 

    std::vector<int> v2 = goodVibes(v1); 
    std::cout << "Original vector w/ neg values inside:\n";
     printVector(v1); 
     std::cout << "New vector w/ pos values only:\n";
   printVector(v2); 

   //testing task C 
   std::cout << "Testing task C:\n";
   std::vector<int> v3{1,2,3};

   std::cout << "First vector:\n"; 
   printVector(v3); 
    std::vector<int> v4{4,5};
 
   std::cout << "Second vector:\n"; 
     printVector(v4);

    gogeta(v3,v4); 
    std::cout << "Fused vector:\n"; 

    printVector(v3); 

    //task D 
    std::cout << "Testing task D:\n";
    std::vector<int> v5{1,2,3};
    std::vector<int> v6{4,5};

    std::vector<int> v7 = sumPairWise(v5, v6); // returns [5, 7, 3]
    printVector(v7); 




   
    



}