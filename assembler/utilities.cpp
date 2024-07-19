#include "utilities.hpp"
#include <vector>
String infix_to_postfix(const String& input) {
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
            S.push(lhs + " " + rhs + " "+ op);
        }
        else if (vec[i] != '(') {
           
            S.push(vec[i]);
        }  
        ++i;
    }
    return S.pop();
}

void postfix_to_assembly(const String& str, std::ostream& out) {
    int tempN = 0;
    size_t i = 0;
    stack<String> S;
    String lhs, rhs;
    std::vector<String> vec = str.split(' ');
    //size_t i = 0;


    while(i < vec.size()) {

        if (vec[i] != '*' && vec[i] != '+' && vec[i] != '-' && vec[i] != '/') {
                    S.push(vec[i]);
        }
        else {
            rhs = S.pop();
            lhs = S.pop(); 
            S.push(evaluate(out, lhs, vec[i], rhs, tempN));
        }
        ++i;
    
    }
}

String evaluate(std::ostream& out, const String& lhs, const String& op, const String& rhs, int &temp) {

    String something = "TMP";
    something = something + int_to_String(++temp);

    out << "   LD    " << lhs << std::endl;

    out << "   " << op_to_assembly(op) << "    " << rhs << std::endl;

    out << "   ST    " << something << std::endl;

    return something;

    
}

String op_to_assembly(const String& op) {
    
    switch(op[0]) {
        case '*':
            return "MU";
            break;
        case '+':
            return "AD";
            break;
        case '-':
            return "SB";
            break;
        case '/':
            return "DV";
            break;
        default:
            return "Invalid operator";
            break;
    }

}

String int_to_String(int input) {
    String result;

    while (input != 0) {
        int t = (input % 10);
        input = input / 10;
        result = String(char(t + '0')) + result;
    }
    return result;
}