#include "iostream"
using namespace std;

void primitive_types() {
    // Integer types
    // can only be 0 or positive
    unsigned short int u_a (55); // up to 16 bits
    cout << "the exam score was not " << u_a << endl;

    unsigned int u_b (100); // up to 16 bits
    cout << "the price of this steak is " << u_b << endl;

    unsigned long int u_c (260001000); // up to 32 bits
    cout << "the population of this city is " << u_c << endl;

    unsigned long long int u_d (7'600'000'000); // up to 64 bits
    cout << "the number of stars in this galaxy is " << u_d << endl;


    // can be negative or positive
    short int a (-10); // up to 16 bits
    int b (0); // up to 16 bits
    long int c (10); // up to 32 bits
    long long int d (-10); // up to 64 bits
    // ---------------------

    // Floating point types
    float e (401.23); // up to 7 decimal digits
    cout << "the price of this steak is " << e << endl;
    double f (3.14159); // up to 15 decimal digits
    cout << "Pi is " << f << endl;
    long double g (2.7e120); // up to 19 decimal digits
    cout << "the number of stars in this galaxy is " << g << endl;
    // ---------------------

    // Boolean type
    bool h (true); // true or false 8 bits
    cout << "the value of h is " << h << endl;
    // ---------------------

    // Character type
    char i ('a'); // 8 bits
    cout << "the value of i is " << i << endl;
    // ---------------------
    // overflow example
    short x (30000);
    short y (1000);
    short z (x * y);
    cout << "the value of z is " << z << endl;


}