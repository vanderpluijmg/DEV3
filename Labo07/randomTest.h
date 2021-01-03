//
// Created by koga on 22.12.20.
//

#ifndef LABO07_RANDOMTEST_H
#define LABO07_RANDOMTEST_H

#include <vector>
#include <map>
namespace dev3 {
/**
 * Prints an array.
 * @param data
 */
    void print(const std::vector<int> &data);

/**
 * Check number of occurences in an array.
 * @param number
 * @param array
 * @return
 */
    int numberOfOcc(int number, const std::array<int, 10> &array);

/**
 * Sorts a vector.
 * @param data
 * @param ascending In ascending order if true.
 */
    void sort(std::vector<int> &data, bool ascending);

/**
 * Decomposes in prime factors given value.
 * @param result
 * @param value Value to decompose.
 * @return Count of different prime factor of value.
 */
    unsigned primeFactor(std::map<unsigned, unsigned> &result, unsigned value);

/**
 * Gets number of time a value can be divided by a number.
 * @param dividor
 * @param numberToDiv
 * @return Number of times
 *
 */

    unsigned getMultpDecomp(unsigned dividor, unsigned numberToDiv);

/**
 * Decomposes value by dividing it as much as possible by a number.
 * @param dividor
 * @param numberToDiv
 * @return value after decomp
 */
    unsigned decompNumber(unsigned dividor, unsigned numberToDiv){
        do {
            numberToDiv/=dividor;
        }
        while (numberToDiv%dividor==0);
        return numberToDiv;
    }

/**
 * Prints a map with pair as prime number.
 * @param myMap
 */
    void printMapPrime(std::map<unsigned, unsigned> &myMap);
}

#endif //LABO07_RANDOMTEST_H
