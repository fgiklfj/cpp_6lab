#ifndef INC_2LAB6_14_PREDICATES_H
#define INC_2LAB6_14_PREDICATES_H
#include "Number.h"

template <typename T>
bool is_even(T n) {
    return n % 2 == 0;
}

template <typename T>
bool compare_desc(T a, T b) {
    return a >= b;
}

template<typename T>
bool isPositive(T x) {
    return x > 0;
}

template<typename T>
bool isNegative(T x) {
    return x < 0;
}

template<typename T>
bool isNotZero(T number) {
    if (number == 0)
        return false;

    return true;
}

template<typename T>
bool greaterThanThreshold(T a, T threshold) {
    return a > threshold;
}

#endif //INC_2LAB6_14_PREDICATES_H
