#include <iostream>
#include <algorithm>
#include "fraction.hpp"
#include "data_fraction.h"
#include "utilsLabo08.h"

using namespace std;

void ex86_87(size_t size) {
    auto generatedVector = nvs::data_signed(size);
    vector<g54786::Fraction> fractionsAdr;
    auto nbOfErrors=0;
    for (pair<int, int> index : generatedVector) {
        try {
            fractionsAdr.push_back(
                    g54786::Fraction{
                            index.first,
                            index.second
                    });
        } catch (std::invalid_argument &e) {
            nbOfErrors++;
        }
    }
    cout<<fractionsAdr.size()<< ": SIZEOF"<<endl;
    cout<< "There is/are : " << nbOfErrors << " error/s." <<endl;
    cout<< "Size of genVector is : " << generatedVector.size()<< endl;
    cout<< "Size of vector is : " << fractionsAdr.size()<< endl;
    g54786::printVectorFractions(fractionsAdr);
    cout<< "After being sorted" << endl;
    g54786::ProdnSortVector(fractionsAdr);
}
void ex88(size_t size, bool _89 = true){
    auto generatedVector = nvs::data_unsigned(size);
    vector<g54786::Fraction> fractionsAdr;
    auto nbOfErrors = 0;
    for (auto index : generatedVector) {
        try {
            fractionsAdr.push_back((
                    g54786::Fraction {
                            g54786::sign(get<0>(index)),
                            get<1>(index),
                            get<2>(index)}));
        } catch (invalid_argument &e) {
            nbOfErrors++;
        }
    cout<< "There is/are : " << nbOfErrors << " error/s." <<endl;
    cout<< "Size of vector is : " << fractionsAdr.size()<< endl;
    printVectorFractions(fractionsAdr);
    cout<< "After being sorted" << endl;
    if (_89) {
        vector<reference_wrapper<g54786::Fraction>> r_wFractionsAdr(fractionsAdr.begin(), fractionsAdr.end());
        g54786::prodnSortReference_Wrapper(r_wFractionsAdr);
    }
    g54786::ProdnSortVector(fractionsAdr);
    }
    }

int main() {

    ex86_87(15);
    cout<<endl;
    //ex88(10);
    /*
    g54786::Fraction fraction (g54786::Sign::MINUS, 5, 4);
    cout<<fraction;
*/}


