#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "fusion.h"
#include "optimism.h"
#include "pairwise.h"
#include "vectors.h"
#include <vector>
#include <iostream>

bool compareVectors(std::vector<int> v, std::vector <int> v2) { 
    int num = 0; 
    if (v.size() != v2.size()) { 
        return false; 
    }
    else { 
        for (int i = 0; i < v.size(); i++) { 
            if (v[i] == v2[i]) { 
                num++; 
            }
        }
        if (num == v.size()) { 
            return true; 
        }
    }
    return false; 
}

TEST_CASE("task A") {
    std::vector<int> v{0,1,2,3}; 
    std::vector<int> v2 = makeVector(4); 

    CHECK(compareVectors(v, v2) == true);


    std::vector<int> v3; 
    std::vector<int> v4 = makeVector(0); 
    CHECK(compareVectors(v3, v4) == true);

    std::vector<int> v5{0,3,2,3}; 
    std::vector<int> v6 = makeVector(4); 

    CHECK(compareVectors(v5, v6) == false);

    std::vector<int> v7{0,1,2,3}; 
    std::vector<int> v8 = makeVector(-4); 

    CHECK(compareVectors(v7, v8) == false);

}

TEST_CASE("task B") {
    std::vector<int> v{1, 2, -1, 3, 4, -1,6}; 
    std::vector<int> v2 = goodVibes(v); 

    CHECK(compareVectors(v, v2) == false);

    std::vector<int> v3{1,2,3}; 
    std::vector<int> v4 = goodVibes(v3); 

    CHECK(compareVectors(v3, v4) == true);

    std::vector<int> v5{1, 2, -1, 3, 4, -1,6}; 
    std::vector<int> v6 = goodVibes(v5); 
    std::vector<int> v7{1, 2, 3, 4,6}; 

    CHECK(compareVectors(v6, v7) == true);

    std::vector<int> v8{1, 2, -1, 3, 4, -1,6,0}; 
    std::vector<int> v9 = goodVibes(v8); 
    std::vector<int> v10{1, 2, 3, 4,6}; 
    CHECK(compareVectors(v10, v9) == true);

    std::vector<int> v11{0,0,0}; 
    std::vector<int> v12 = goodVibes(v11); 
    std::vector<int> v13; 
    CHECK(compareVectors(v12, v13) == true);

    std::vector<int> v14{-2,-3,-1}; 
    std::vector<int> v15 = goodVibes(v14); 
    std::vector<int> v16; 
    CHECK(compareVectors(v16, v15) == true);

    std::vector<int> v17{-2,0, -3,-1, 0}; 
    std::vector<int> v18 = goodVibes(v17); 
    std::vector<int> v19; 
    CHECK(compareVectors(v18, v19) == true);

}

TEST_CASE("task C") {
    std::vector<int> empty; 
    std::vector<int> v{1, 2, -1, 3, 4, -1,6};  
    std::vector<int> v2{0,0,0}; 
    gogeta(v,v2); 
    std::vector<int> v3{1, 2, -1, 3, 4, -1,6,0,0,0};  

    CHECK(compareVectors(v3, v) == true);
    CHECK(compareVectors(v2, empty) == true);

    std::vector<int> v4;  
    std::vector<int> v5{0,0,0}; 
    gogeta(v4,v5); 
    std::vector<int> v6{0,0,0};  

    CHECK(compareVectors(v6, v4) == true);
    CHECK(compareVectors(v5, empty) == true);


    std::vector<int> v7;  
    std::vector<int> v8; 
    gogeta(v7,v8); 

    CHECK(compareVectors(v7, v8) == true);
    CHECK(compareVectors(v8, empty) == true);

}

TEST_CASE("task D") {
    std::vector<int> v{1,2,3};  
    std::vector<int> v2{1,2,3}; 
    std::vector<int> v3 = sumPairWise(v, v2); 
    std::vector<int> v4{2,4,6}; 


    CHECK(compareVectors(v3, v4) == true);

    std::vector<int> v5{1,2,3};  
    std::vector<int> v6{1,2}; 
    std::vector<int> v7 = sumPairWise(v5, v6); 
    std::vector<int> v8{2,4,3}; 


    CHECK(compareVectors(v7, v8) == true);


    std::vector<int> v9{1,2,3};  
    std::vector<int> v10{1,-2,3}; 
    std::vector<int> v11 = sumPairWise(v9, v10); 
    std::vector<int> v12{2,0,6}; 


    CHECK(compareVectors(v11, v12) == true);

    std::vector<int> v13{1,2,3};  
    std::vector<int> v14{1,2,3,4,5}; 
    std::vector<int> v15 = sumPairWise(v13, v14); 
    std::vector<int> v16{2,4,6,4,5}; 


    CHECK(compareVectors(v15, v16) == true);

    std::vector<int> v17{1,2,3};  
    std::vector<int> v18; 
    std::vector<int> v19 = sumPairWise(v17, v18); 
    std::vector<int> v20{1,2,3}; 


    CHECK(compareVectors(v19, v20) == true);

    std::vector<int> v21;
    std::vector<int> v22{1,2,3};
    std::vector<int> v23 = sumPairWise(v21, v22); 
    std::vector<int> v24{1,2,3}; 


    CHECK(compareVectors(v23, v24) == true);

    std::vector<int> v25{-9,-2,-3};  
    std::vector<int> v26{-1,-4,2}; 
    std::vector<int> v27 = sumPairWise(v25, v26); 
    std::vector<int> v28{-10,-6,-1}; 
    CHECK(compareVectors(v27, v28) == true);

    std::vector<int> v29;  
    std::vector<int> v30; 
    std::vector<int> v31 = sumPairWise(v29, v30); 
    std::vector<int> v32; 
    CHECK(compareVectors(v31, v32) == true);


}
  









