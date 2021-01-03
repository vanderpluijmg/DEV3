#include <iostream>
#include <array>
#include <iomanip>
#include "random.hpp"
#include "randomTest.h"
#include <algorithm>
using namespace std;
void testEx1 (){
    array<int, 10> randomGenArray{};
    for (int i = 0; i<randomGenArray.size(); i++) {
        randomGenArray[i] = nvs::random_value(0.0, 10);
    }
    for (int i = 0; i < randomGenArray.size(); ++i) {
        cout << "nombre de " << i << " : " << numberOfOcc(i,randomGenArray) << " (" <<  numberOfOcc(i, randomGenArray)/100 << " %)" << endl;
    }
}
void testEx3 (){
    vector<int> data (10);
    std::generate(data.begin(), data.end(), []() { return nvs::random_value(0,5);});
    print(data);
    sort(data, true);
    cout<<"Ascending : ";
    print(data);
}
void testEx4(char letter){
    vector<int> data (10);
    std::generate(data.begin(), data.end(), []() { return nvs::random_value(0,11);});
    print(data);
    if (letter=='a'){
        std::sort(data.begin(), data.end(), [](int a, int b){return a<b;});
        cout<<"croissant : ";
        print(data);
    }
    else if (letter=='b'){
        std::sort(data.begin(), data.end(), [](int a, int b){return a>b;});
        cout<<"décroissant : ";
        print(data);
    } else {
        std::sort(data.begin(), data.end(), [](int a, int b){return a%3<b%3;});
        cout<<"croissant modulo 3 : ";
        print(data);
    }
}
void testEx5 (){
    std::map<unsigned, unsigned> myMap;
    primeFactor(myMap, 1552521060);
    printMapPrime(myMap);
}
int main() {
    //testEx1();
    //testEx3();
    //testEx4('b');
    testEx5();


}
