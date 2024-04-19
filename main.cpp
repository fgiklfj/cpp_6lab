#include "iterator.h"
#include "predicates.h"
#include "Number.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {

    vector<int> try1 = {2, 6, 2, 1, 3};

    cout << "Проверка anyOf с предикатом is_even" << endl;
    cout << anyОf(try1.begin(), try1.end(), is_even<int>) << endl;

    cout << "Проверка isSоrted с предикатом compare_desc" << endl;
    cout << isSоrted(try1.begin(), try1.end(), compare_desc<int>) << endl;

    cout << "Проверка isPalindrоme с предикатом isPositive" << endl;
    cout << isPalindrоme(try1.begin(), try1.end(), isPositive<int>) << endl;


    vector<Num<float>> try2 = {Num<float>(5.74978230713), Num<float>(-0.00000000001), Num<float>(-5.74978230713), Num<float>(0.0000000000),};


    cout << "Проверка anyOf с предикатом isNegative" << endl;
    cout << anyОf(try2.begin(), try2.end(), isNegative<Num<float>>) << endl;

    cout << "Проверка isSоrted с предикатом greaterThanThreshold" << endl;
    cout << isSоrted(try2.begin(), try2.end(), greaterThanThreshold<Num<float>>) << endl;

    cout << "Проверка isPalindrоme с предикатом isnotzero" << endl;
    cout << isPalindrоme(try2.begin(), try2.end(), isNotZero<Num<float>>) << endl;

    return 0;
}
