//  Stack class test program
//
//  Tests: push and pop functions 
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

        // TEST
        x.push(7);

        // VERIFY
        assert(x.empty() == false);
     }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(9);
        x.pop();

        // VERIFY
        assert(x.empty() == true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(7);
        x.pop();
        x.push(8);
        int result = x.pop();

        // VERIFY
        assert(x.empty() == true);
        assert(result == 8);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(7);
        x.pop();
        x.push(8);
        x.push(17);
        int result = x.pop();
        int topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(result == 17);
        assert(topResult == 8);
     }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(7);
        x.pop();
        x.push(8);
        int result = x.pop();

        // VERIFY
        assert(x.empty() == true);
        assert(result == 8);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(7);
        x.push(8);
        x.push(17);
        int topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(topResult == 17);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('7');

        // VERIFY
        assert(x.empty() == false);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('9');
        x.pop();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.pop();
        x.push('b');
        char result = x.pop();

        // VERIFY
        assert(x.empty() == true);
        assert(result == 'b');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.pop();
        x.push('b');
        x.push('c');
        char result = x.pop();
        char topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(result == 'c');
        assert(topResult == 'b');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.pop();
        x.push('b');
        char result = x.pop();

        // VERIFY
        assert(x.empty() == true);
        assert(result == 'b');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.push('b');
        x.push('c');
        char topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(topResult == 'c');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("abc");
        x.pop();
        x.push("123");
        String result = x.pop();

        // VERIFY
        assert(x.empty() == true);
        assert(result == "123");
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("ab");
        x.push("cd");
        x.push("efg");
        String topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(topResult == "efg");
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("abc");
        x.pop();
        x.push("123");
        x.push("hi");
        String result = x.pop();
        String topResult = x.top();

        // VERIFY
        assert(x.empty() == false);
        assert(result == "hi");
        assert(topResult == "123");
     }



    
    std::cout << "Done testing push and pop." << std::endl;
    return 0;
}

