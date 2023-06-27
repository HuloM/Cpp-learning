//
// Created by md on 6/27/23.
//

#include "romToInt.h"
#include "iostream"
#include "map"
using namespace std;

int romToInt(string s) {
    int total = 0;
    char* p = &s[0];
    map<char, int> roman = {
            { 'M', 1000 },
            { 'D', 500 },
            { 'C', 100 },
            { 'L', 50 },
            { 'X', 10 },
            { 'V', 5 },
            { 'I', 1 }
     };
    while(*p != '\0') {
        total += roman.at(*p);
        p++;
    }

    return total;
}