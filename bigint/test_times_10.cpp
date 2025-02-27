// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(3);

        // Verify
        std::cout << bi;
        assert(bi == 3000);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(276);

        // Test 
        bi = bi.times10(4);

        // Verify
        std::cout << bi;
        assert(bi == 2760000);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.times10(2);

        // Verify
        std::cout << bi;
        assert(bi == 0);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1);

        // Test 
        bi = bi.times10(10);

        // Verify
        std::cout << bi;
        assert(bi == "10000000000");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("34569079323745");

        // Test 
        bi = bi.times10(0);

        // Verify
        std::cout << bi;
        assert(bi == "34569079323745");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("34569079323745");

        // Test 
        bi = bi.times10(7);

        // Verify
        std::cout << bi;
        assert(bi == "345690793237450000000");
    }
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

