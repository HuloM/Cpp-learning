//
// Created by md on 6/27/23.
//

#include "sizeOfOperator.h"
#include "iostream"
#include "climits"

using namespace std;

void sizeOfOp() {
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of Unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "size of long: " << sizeof(long) << " bytes" << endl;
    cout << "size of long long: " << sizeof(long long) << " bytes" << endl;

    cout << "============================" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;
    cout << "size of double long: " << sizeof(long double) << " bytes" << endl;

    cout << "============================" << endl;
    cout << "Minimum Values:" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "short int: " << SHRT_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "============================" << endl;
    cout << "Maximum Values:" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "short int: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

}