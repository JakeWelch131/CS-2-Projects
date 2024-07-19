//  Jacob Welch
//  9/15/2023
//  Creating IO functions for lab4

#include <iostream>
#include <fstream>

//prototype for function that opens a text file, reads it, and outputs each word on a new line
void readText();

//prototype for function that opens the data file reads the line, and sums the two numbers together
void addNumbers();
int main() {

    readText();
    addNumbers();

}

//definition for func that outputs new word on each line
void readText() {
    std::ifstream file ("fileio-text.txt");
    char ch;
    
    //loops until end of file
    while (!file.eof()) {

        file.get(ch);
        //if the character is not a space, output the character
        if (ch != ' ') 
            std::cout << ch;
        
        //if the character is a space, output endline
        else 
            std::cout << std::endl;
        
        

    }
  file.close();
}

//definiton for func that outputs the sum of the two numbers on each line
void addNumbers() {
    
    //opens file and declares input stream
    std::ifstream file("fileio-data-1.txt");

    //checks if correct file is opened
    if (!file.is_open()) {                      
        std::cout <<"Unable to open file" << std::endl;
        return;
    }
    
    int lhs, rhs;
    char ch, ch1;

    //loops until end of file
    while (!file.eof()) {
        if (file >> lhs >> ch >> rhs >> ch1)    //assigns the numbers to the integers and the semicolons to the characters
        std::cout << lhs + rhs << std::endl;    //outputs the sum
    }
    file.close();                               //closes file after loop completes
}






