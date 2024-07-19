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
        // Testing standard multiplication
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 6);  
        
        std::cout << bi; 
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        // Testing carry
        bigint bi(1234);

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == 3702); 
        
        std::cout << bi; 
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        // Testing a bigint mulitplied by 0
        bigint bi(1234);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  
        
        std::cout << bi; 
    }
    
     {
        //------------------------------------------------------
        // Setup fixture
        // Testing multiplying 0 by 0
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  
        
        std::cout << bi; 
    }
    
     {
        //------------------------------------------------------
        // Setup fixture
        // Testing multiplying bi = 0 to a non-zero integer
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 0);  
        
        std::cout << bi; 
    }
    
    
    {
        //------------------------------------------------------
        // Setup fixture
        // Testing capacity
        bigint bi("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");

        // Test 
        bi = bi.timesDigit(3);
        // Verify
        assert(bi == "33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");  //Will FAIL, fix and add test cases.
        
        std::cout << bi; 
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        // Testing string multiplied by 0
        bigint bi("76908237903429038745984769823409485790386790283");

        // Test 
        bi = bi.timesDigit(0);
        // Verify
        assert(bi == 0);  
        
        std::cout << bi; 
    }

    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}
