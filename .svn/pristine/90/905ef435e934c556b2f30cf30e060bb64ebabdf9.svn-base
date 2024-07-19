// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  
        assert(digit == 4);
    }

    

    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi    == 4);  
        assert(digit != 4);
    }

    {
        // Setup
        bigint bi(1234);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi    == 1234);  
        assert(digit == 1);
    }

    {
        // Setup
        bigint bi(2345);

        // Test 
        int zero   = bi[0];
        int one    = bi[1];
        int two    = bi[2];
        int three  = bi[3];


        // Verify
        assert(bi    == 2345);  
        assert((zero == 5) && (one == 4) && (two == 3) && (three == 2));
    }
    
    {
        // Setup
        bigint bi("51111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"  );

        // Test 
        int digit = bi[199];

        // Verify
        assert(bi    == "51111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");  
        assert(digit == 5);
    }

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

