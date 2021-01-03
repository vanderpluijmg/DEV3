//
// Created by koga on 02.01.21.
//

#ifndef LABO08_UTILSLABO08_H
#define LABO08_UTILSLABO08_H

#include <algorithm>
#include <functional>
#include <vector>
#include "fraction.hpp"
#include <iostream>

namespace g54786 {

    /**
     * Prints a reference wrapper of fractions.
     * @param vector Vector to print.
     */
    void printVectorFractions(const std::vector<std::reference_wrapper<g54786::Fraction>> &vector);

    /**
     * Produces a reference_wrapper to a vector, sorts itself.
     * @param vectorToCopy Vector with unmutable fractions.
     */
    void prodnSortReference_Wrapper(std::vector<std::reference_wrapper<g54786::Fraction>>& sortableVector);

    /**
     * Produces new vector, copies adress of given vector and sort itself.
     * @param vectorToCopy Vector with unmutable fractions.
     */
    void ProdnSortVector(const std::vector<g54786::Fraction>& vectorToCopy);

    /**
     * Prints a vector of fractions.
     * @param vector Vector to print. Taken by const reference.
     */
    void printVectorFractions (const std::vector<g54786::Fraction>&);

    /**
     * Prints a vector of fractions.
     * @param vector Vector to print. Taken by const reference.
     */
    void printVectorFractions (const std::vector<const g54786::Fraction *> vector);
}
#endif //LABO08_UTILSLABO08_H
