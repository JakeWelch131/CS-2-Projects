#include "infix2prefix.hpp"

String infix_to_prefix(const String& input) {
    int i = 0;
    stack<String> S;
    String lhs, rhs, op;
    std::vector<String> vec = input.split(' ');
    //size_t i = 0;


    while(vec[i] != ';') {
        
        if (vec[i] == ')') {
            rhs = S.pop();
            op = S.pop();
            lhs = S.pop();
            S.push(op + " " + lhs + " " + rhs);
        }
        else if (vec[i] != '(') {
           
            S.push(vec[i]);
        }
        ++i;
    }
    return S.pop();
}

int main() {
    std::ifstream in;
    in.open("data3-1.txt");
    if (!in.is_open()) {
        std::cerr << "File not found" << std::endl;
        return 1;
    }

    String tempLine;
        char ch;
        while (!in.eof()) {
            in.get(ch);
            if(ch != ';')    tempLine += ch;
            if (ch == ';') {
            tempLine += ch;
            std::cout << infix_to_prefix(tempLine) << std::endl;
            tempLine = "";
            }
        }
}

//this compiles using the command: clang++ infix2prefix.cpp ../assembler/stack.hpp ../string/string.cpp