/**
 * Jacob Welch
 * bigint.hpp
 * CS 23001-001
*/

//This program is the header file for Project 1 Bigint

#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>

const int CAPACITY = 200;

class bigint{
    public:
        bigint();
        bigint(int);
        bigint(const char[]);
        bigint operator+(const bigint&) const;
        bigint operator*(const bigint&); 
        void debugPrint(std::ostream&) const;
        int operator[](int) const;
        bigint timesDigit(const int&);
        bigint times10(int) const;

        friend bool operator==(const bigint&, const bigint&);
        friend std::ostream& operator<<(std::ostream&, const bigint&);
        friend std::istream& operator>>(std::istream&, bigint&);

    private:
        int bigintArray[CAPACITY];
};

#endif

