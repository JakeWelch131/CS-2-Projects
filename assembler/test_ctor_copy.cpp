//  Stack class test program
//
//  Tests: copy ctor 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);

        
        // TEST
        stack<int> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);
        x.push(200);
        x.push(300);

        
        // TEST
        stack<int> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);
        x.pop();
        x.push(200);

        
        // TEST
        stack<int> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        
        // TEST
        stack<char> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');
        x.push('b');
        x.push('c');

        
        // TEST
        stack<char> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');
        x.pop();
        x.push('b');

        
        // TEST
        stack<char> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        
        // TEST
        stack<String> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");
        x.push("123");
        x.push("hi");

        
        // TEST
        stack<String> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");
        x.pop();
        x.push("123");

        
        // TEST
        stack<String> Copy(x);

        // VERIFY
        assert(x.top() == Copy.top());
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy ctor." << std::endl;
    return 0;
}

