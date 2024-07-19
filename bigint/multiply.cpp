// File: add.cpp
//
// CS 23001 Project 1 bigint
//
// Basics for openning a file for milestone 2
//

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-2.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-2.txt" << std::endl;
        exit(1);
    }
    
    bigint first;
    bigint second;

    while (in >> first && in >> second){
        std::cout << "First bigint: " << first << std::endl;
        std::cout << "Second bigint: " << second << std::endl;
        bigint sum = first * second;
        std::cout << "Product of the bigints: " << sum << std::endl;
    }
    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together
       //Print out results
 
    in.close();
    return 0;
}

