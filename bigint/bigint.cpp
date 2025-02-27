/**
 * Jacob Welch
 * bigint.cpp
 * CS 23001-001
*/

//This program is the implementation file for Project 1 Bigint

#include "bigint.hpp"


//default constructor that assigns all elements of array to 0
bigint::bigint() {
    for (int i=0; i < CAPACITY; ++i) {
        bigintArray[i]=0;
    }
}


//constructor that takes an int and stores it in reverse order in the array
bigint::bigint(int num) {
    for (int i = 0; i < CAPACITY; ++i) {
        bigintArray[i] = 0;
    }
    
    //loops starting at 0, takes the last digit of int and stores it in first index of the array
    for (int i = 0; i < CAPACITY; ++i) {
        bigintArray[i] = num % 10;         
	    num = num / 10; 
    }        
}


//constructor that takes a character array and stores it in reverse order into the array
bigint::bigint(const char num[]) {
    for (int i = 0; i < CAPACITY; ++i)
        bigintArray[i] = 0;
    
    //finds the length of the char array
    int length = 0;
    while (num[length] != 0)
        ++length;
         
    int position = 0;
    
    //loops through the char array starting at length - 1 and loops until it reaches 0
    for(int i = length - 1; i >= 0; --i) {

        //converts the last character in the char array to an int
        //then assigns that int to the correct position in bigintArray
        bigintArray[position] = num[i] - '0';
        ++position;
    }
}


//function that prints out the contents of bigintArray for debugging
void bigint::debugPrint(std::ostream& out) const {
    for (int i = 0; i < CAPACITY; ++i) {
        out << bigintArray[i] << " | ";
    }
}


//overloads the == operator to allow two bigitns to be compared
bool operator==(const bigint& lhs, const bigint& rhs) {
    for(int i = 0; i < CAPACITY; ++i) {
        if (lhs.bigintArray[i] != rhs.bigintArray[i])
            return false;
    }
    return true;
}


//overloads the << operator to allow a bigint to be output in correct numerical order with no 0s
std::ostream& operator<<(std::ostream& out, const bigint& rhs) {

    int nonZeroindex = CAPACITY - 1;

    //searches the array to find the index at which nonZeroindex is not zero
    while ((nonZeroindex > 0) && (rhs.bigintArray[nonZeroindex] == 0)) {
        --nonZeroindex;
    }

    //loops through the array until nonZeroindex reaches beginning of array
    while (nonZeroindex >= 0) {
        if (nonZeroindex % 80)
            out << rhs.bigintArray[nonZeroindex];
            
        else
            out << rhs.bigintArray[nonZeroindex] << std::endl;

    --nonZeroindex;
    }
    return out;
}


//overloads the + operator to allow for two bigints to be added together
//retuns a bigint that is the sum of lhs & rhs
bigint bigint::operator+(const bigint &rhs) const {
    int carry = 0;
    bigint outcome;
    for (int i = 0; i < CAPACITY; ++i) {
        int sum = bigintArray[i] + rhs.bigintArray[i] + carry;
        outcome.bigintArray[i] = sum % 10;              //assigns the index of the array to the one's place of the sum
        carry = sum / 10;                               //assigns the carry variables to the ten's place of the sum to allow for proper addition
    }
    return outcome;
}


//function that returns the digit where i is the 10^i position 
int bigint::operator[](int i) const {
    return bigintArray[i];
}


//overloads the input operator to be able to take in an input stream and make it a bigint
std::istream& operator>>(std::istream& input, bigint& rhs) {
    char ch;
    char chArray[CAPACITY];

    //initializes the array to 0
    for (int i = 0; i < CAPACITY; ++i) {
        chArray[i] = 0;
    }

    //stores first character to ch
    input >> ch;

    //loops until i reaches capacity or ch == ';'
    for (int i = 0; i < CAPACITY && ch != ';'; ++i) {
        chArray[i] = ch;                            //assigns the character to the correct index in array
        input >> ch;                                //stores the next character into ch
    }
    rhs = chArray;                                  //uses constructor to convert the character array into bigint
    return input;
}


//similar implementation as overloading + 
bigint bigint::timesDigit(const int &value) {
    int carry = 0;
    bigint outcome;
    for (int i = 0; i < CAPACITY; ++i) {
        int sum = (bigintArray[i] * value) + carry; //multiplies the value in the array by the integer passed
        outcome.bigintArray[i] = sum % 10;          //assigns the index of the array to the one's place of the sum
        carry = sum / 10;                           //assigns the carry variables to the ten's place of the sum to allow for proper addition
    }                                               //repeats until the loop reaches the last place value
    return outcome;
}


//function that multiplies a bigint by 10^n
bigint bigint::times10(int input) const {
    int value;
    bigint shift;

    if (input == 0) {
        bigint temp = *(this);                          //if input == 0, output the current bigint value
        return temp;
    }

    if (input > 0) {
        for (int i = 0; i < CAPACITY; ++i) {
            value = input + i;                          //takes in the number of place values we want to shift and increments with each loop
            shift.bigintArray[value]  = bigintArray[i]; //assigns the shift array the same values as the original array
        }                                               //just shifted over the correct amount of places
    }
    return shift;                                       //returns the shifted bigint
}

bigint bigint::operator*(const bigint &rhs) {
    bigint temp;
    bigint product = 0;

    for (int i = 0; i < CAPACITY; ++i) {
        temp = timesDigit(rhs.bigintArray[i]);
        product = product + temp.times10(i);
    }
    return product;
}
