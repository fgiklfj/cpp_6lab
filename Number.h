#ifndef INC_2LAB6_14_NUMBER_H
#define INC_2LAB6_14_NUMBER_H

template<typename T>
class Num {
private:
    T rational_part;

public:
    Num(T x) : rational_part(x) {}

    bool operator==(const Num &other) const {
        return rational_part == other.rational_part;
    }

    bool operator!=(const Num &other) const {
        return rational_part != other.rational_part;
    }

    bool operator<(const Num &other) const {
        return rational_part < other.rational_part;
    }

    bool operator<=(const Num &other) const {
        return rational_part <= other.rational_part;
    }

    bool operator>(const Num &other) const {
        return rational_part > other.rational_part;
    }

    bool operator>=(const Num &other) const {
        return rational_part >= other.rational_part;
    }
};


#endif //INC_2LAB6_14_NUMBER_H
