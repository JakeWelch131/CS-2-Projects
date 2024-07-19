//  Stack class test program
//
//  Tests: assign 
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

        stack<int>  y;

        // TEST
        y = x;
        int xValue = x.top();
        int yValue = y.top();
        // VERIFY
        assert(xValue == 100);
        assert(yValue == 100);
     }


     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);

        stack<int>  y;
        y.push(200);
        // TEST
        y = x;
        int xValue = x.top();
        int yValue = y.top();
        // VERIFY
        assert(xValue == 100);
        assert(yValue == 100);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);

        stack<int>  y;
        y.push(200);
        // TEST
        x = y;
        int xValue = x.top();
        int yValue = y.top();
        // VERIFY
        assert(xValue == 200);
        assert(yValue == 200);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);
        x.pop();

        stack<int>  y;
        y.push(200);
        // TEST
        x = y;
        int xValue = x.top();
        int yValue = y.top();
        // VERIFY
        assert(xValue == 200);
        assert(yValue == 200);
     }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);
        x.push(200);
        x.push(300);

        stack<int>  y;
        y.push(200);
        y.pop();
        // TEST
        y = x;
        int xValue = x.top();
        int yValue = y.top();
        // VERIFY
        assert(xValue == 300);
        assert(yValue == 300);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);

        // TEST
        x = x;
        int xValue = x.top();

        // VERIFY
        assert(xValue == 100);
        assert(x.empty() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(100);

        stack<int>  y;
        y.push(200);

        stack<int>  z;
        z.push(300);

        // TEST
        x = y = z;

        // VERIFY
        assert(x.top() == 300);
        assert(y.top() == 300);
        assert(z.top() == 300);
        assert(x.empty() == false);
    }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        stack<String>  y;

        // TEST
        y = x;
        String xValue = x.top();
        String yValue = y.top();
        // VERIFY
        assert(xValue == "abc");
        assert(yValue == "abc");
     }


     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        stack<String>  y;
        y.push("123");
        // TEST
        y = x;
        String xValue = x.top();
        String yValue = y.top();
        // VERIFY
        assert(xValue == "abc");
        assert(yValue == "abc");
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        stack<String>  y;
        y.push("123");
        // TEST
        x = y;
        String xValue = x.top();
        String yValue = y.top();
        // VERIFY
        assert(xValue == "123");
        assert(yValue == "123");
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");
        x.pop();

        stack<String>  y;
        y.push("123");
        // TEST
        x = y;
        String xValue = x.top();
        String yValue = y.top();
        // VERIFY
        assert(xValue == "123");
        assert(yValue == "123");
     }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");
        x.push("123");
        x.push("hi");

        stack<String>  y;
        y.push("world");
        y.pop();
        // TEST
        y = x;
        String xValue = x.top();
        String yValue = y.top();
        // VERIFY
        assert(xValue == "hi");
        assert(yValue == "hi");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        // TEST
        x = x;
        String xValue = x.top();

        // VERIFY
        assert(xValue == "abc");
        assert(x.empty() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");

        stack<String>  y;
        y.push("123");

        stack<String>  z;
        z.push("hi");

        // TEST
        x = y = z;

        // VERIFY
        assert(x.top() == "hi");
        assert(y.top() == "hi");
        assert(z.top() == "hi");
        assert(x.empty() == false);
    }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        stack<char>  y;

        // TEST
        y = x;
        char xValue = x.top();
        char yValue = y.top();
        // VERIFY
        assert(xValue == 'a');
        assert(yValue == 'a');
     }


     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        stack<char>  y;
        y.push('b');
        // TEST
        y = x;
        char xValue = x.top();
        char yValue = y.top();
        // VERIFY
        assert(xValue == 'a');
        assert(yValue == 'a');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        stack<char>  y;
        y.push('b');
        // TEST
        x = y;
        char xValue = x.top();
        char yValue = y.top();
        // VERIFY
        assert(xValue == 'b');
        assert(yValue == 'b');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');
        x.pop();

        stack<char>  y;
        y.push('b');
        // TEST
        x = y;
        char xValue = x.top();
        char yValue = y.top();
        // VERIFY
        assert(xValue == 'b');
        assert(yValue == 'b');
     }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');
        x.push('b');
        x.push('c');

        stack<char>  y;
        y.push('z');
        y.pop();
        // TEST
        y = x;
        char xValue = x.top();
        char yValue = y.top();
        // VERIFY
        assert(xValue == 'c');
        assert(yValue == 'c');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        // TEST
        x = x;
        char xValue = x.top();

        // VERIFY
        assert(xValue == 'a');
        assert(x.empty() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');

        stack<char>  y;
        y.push('b');

        stack<char>  z;
        z.push('c');

        // TEST
        x = y = z;

        // VERIFY
        assert(x.top() == 'c');
        assert(y.top() == 'c');
        assert(z.top() == 'c');
        assert(x.empty() == false);
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assign." << std::endl;
    return 0;
}