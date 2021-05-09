#include <iostream>

namespace {
    //! Greatest common divisor (recursive)
    /**
    * @param[in] a - the fisrt number
    * @param[in] b - the second number
    * @return gcd(a, b)
    */
        unsigned int gcd(unsigned int const a, unsigned int const b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    //! Greatest common divisor by Euclid's algorithm
    /**
    * @param[in] a - the fisrt number
    * @param[in] b - the second number
    * @return gcd(a, b)
    */
        unsigned int gcdEuclid(unsigned int a, unsigned int b) {
        while (b != 0) {
            unsigned int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}

int main()
{}