
#include "utilsLabo08.h"

namespace g54786 {

    void printVectorFractions(const std::vector<g54786::Fraction> &vector) {
        for (auto fraction : vector)
            std::cout << fraction;
    }

    void printVectorFractions(const std::vector<const g54786::Fraction *> vector) {
        for (auto fraction : vector)
            std::cout << *fraction;
    }

    void printVectorFractions(const std::vector<std::reference_wrapper<g54786::Fraction>> &vector) {
        for (auto &fraction : vector)
            std::cout << fraction.get();
    }

    void ProdnSortVector(const std::vector<g54786::Fraction> &vectorToCopy) {
        std::vector<const g54786::Fraction *> fractionPtr(vectorToCopy.size());
        std::generate(fractionPtr.begin(), fractionPtr.end(), [&vectorToCopy]() -> const g54786::Fraction * {
            static int i = 0;
            return &vectorToCopy[i++];
        });
        std::sort(fractionPtr.begin(), fractionPtr.end(),
                  [](const g54786::Fraction *f1, const g54786::Fraction *f2) { return *f1 > *f2; });
        printVectorFractions(fractionPtr);
    }

    void prodnSortReference_Wrapper(std::vector<std::reference_wrapper<g54786::Fraction>> &sortableVector) {
        std::sort(sortableVector.begin(), sortableVector.end(),
                  std::less<>());
        printVectorFractions(sortableVector);
        }
    }