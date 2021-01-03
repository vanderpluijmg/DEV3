
#include "sign.h"
#include "fraction.hpp"

namespace g54786{
Fraction::Fraction(int numerator, int denominator) :
        Fraction(
                g54786::sign(numerator * denominator),
                std::abs(numerator),
                std::abs(denominator)
        ) {};

Fraction::Fraction(Sign sign, unsigned numerator, unsigned denominator) :
        sign_{sign},
        numerator_{numerator},
        denominator_{denominator} {
    if (denominator == 0)
        throw std::invalid_argument ("Can not div by 0");
    if (sign == g54786::Sign::ZERO && numerator!=0)
        throw std::invalid_argument("Sign est 0, est numerator non");
};

std::string Fraction::to_string() const {//Minus does not show.
    std::string result = std::to_string(numerator());
    if (sign() == Sign::MINUS) {
        result = "-" + result;
    }
    if (denominator() != 1) {
        result += "/" + std::to_string(denominator());
    }
    return result;
}

bool operator<(const Fraction &lhs, const Fraction &rhs) {
    return !(lhs>rhs);
}

Fraction operator+(const Fraction &lhs, const Fraction &rhs) {
    return Fraction((lhs.numerator() * rhs.denominator()) + (rhs.numerator() * lhs.denominator()),
                    (rhs.denominator() * lhs.denominator()));
}

Fraction operator*(const Fraction &lhs, const Fraction &rhs) {
    return Fraction(lhs.numerator() * rhs.denominator(), lhs.denominator() * rhs.denominator());
}

Fraction operator/(const Fraction &lhs, const Fraction &rhs) {
    return Fraction((lhs.numerator() * rhs.denominator()), (lhs.denominator() * rhs.numerator()));
}

};
