// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//
#include <iostream> 
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    //Start of my test cases
    {
      //------------------------------------------------------
      // Setup fixture
      // Tests capacity
      bigint left("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
      bigint right("22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
      assert(right  == "22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222");
      assert(result == "33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }
    
    {
      //------------------------------------------------------
      // Setup fixture
      // Tests to make sure the correct index is being added
      bigint left("03");
      bigint right("001");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 3);
      assert(right  == 1);
      assert(result == 4);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      // Tests to make sure the correct index is being added
      bigint left("001");
      bigint right("03");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 3);
      assert(result == 4);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      // Tests that the "carry" carries over
      bigint left("149");
      bigint right("3276");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 149);
      assert(right  == 3276);
      assert(result == 3425);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      // Tests the sum of 3 bigints
      bigint left("9");
      bigint middle ("5");
      bigint right("6");
      bigint result;

      // Test
      result = left + middle + right;

      // Verify
      assert(left   == 9);
      assert(middle == 5);
      assert(right  == 6);
      assert(result == 20);
    }

    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

