#include <iostream>
#include "utilities.hpp"
#include <fstream>

int main(int argc, char const* argv[]) {

    if (argc < 2) {
        std::cerr <<"No input file given" << std::endl;
    }

    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "File not found: data3-1.txt" << std::endl;
        exit(1);
    }

    std::ofstream outputFile(argv[2]);
    if (!outputFile) {
        std::cerr << "No output file given. Printing results to screen:" << std::endl;
        String tempLine;
        char ch;
        while (!in.eof()) {
            in.get(ch);
            if(ch != ';')    tempLine += ch;
            if (ch == ';') {
            tempLine += ch;
            std::cout << infix_to_postfix(tempLine) << std::endl;
            tempLine = "";
            }
        }
        return 1;
    }

    String tempLine;
    char ch;
    while (!in.eof()) {
        in.get(ch);
        if(ch != ';')    tempLine += ch;
        if (ch == ';') {
        tempLine += ch;
        if(outputFile){
            //std::cout << infix_to_postfix(tempLine) << std::endl;
            outputFile << "infix-postfix is: " << infix_to_postfix(tempLine) << std::endl;
        }
            
        else {
            std::cout << "infix-postfix is: " << infix_to_postfix(tempLine) << std::endl;
        }
        tempLine = "";
        }
        
    }

    in.close();
    outputFile.close();
    return 0;
}
