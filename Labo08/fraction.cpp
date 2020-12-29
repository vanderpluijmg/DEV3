
#include "sign.h"
#include "fraction.hpp"

using namespace g54786;

Fraction::Fraction(int numerator, int denominator) :
    sign_ {g54786::sign(numerator) * g54786::sign(denominator)},
    denominator_{static_cast<unsigned int>(denominator)},
    numerator_ {static_cast<unsigned int>(numerator)}
    {};

Fraction::Fraction(Sign sign, unsigned numerator, unsigned denominator) :
            sign_ {g54786::sign(numerator) * g54786::sign(denominator)},
            numerator_ {denominator},
            denominator_{numerator}
    {};

std::string Fraction::to_string() const{
    return std::to_string(numerator()) + "/" + std::to_string(denominator());
}

bool operator<(const Fraction & lhs, const Fraction & rhs){
   return true;
}

Fraction operator+(const Fraction & lhs, const Fraction & rhs){
    return Fraction((lhs.numerator()*rhs.denominator())+(rhs.numerator()*lhs.denominator()),
                    (rhs.denominator()*lhs.denominator()));
}

Fraction operator*(const Fraction & lhs, const Fraction & rhs){
    return Fraction(lhs.numerator()*rhs.denominator(), lhs.denominator()*rhs.denominator());
}

Fraction operator/(const Fraction & lhs, const Fraction & rhs){
    return Fraction((lhs.numerator()*rhs.denominator()), (lhs.denominator()*rhs.numerator()));
}




