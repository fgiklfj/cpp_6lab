#include "iterator.h"
#include <algorithm>

using namespace std;

template<typename iterator, typename predicat>
bool anyОf(iterator start, iterator finish, predicat condition) {
    int cnt = 0;
    for (iterator i = start; i <= finish; i++)
        if (condition(*i) == true)
            cnt++;

    if (cnt > 0)
        return true;

    else
        return false;
}


template<typename iterator, typename predicat>
bool isSоrted(iterator start, iterator finish, predicat condition) {
    if (start == finish)
        return true;

    iterator next = start;
    next++;

    while (next != finish) {
        if (!condition(*start, *next))
            return false;

        start++;
        next++;
    }

    return true;
}

template<typename iterator, typename predicat>
bool isPalindrоme(iterator start, iterator finish, predicat condition) {
    reverse_iterator<iterator> reverse_finish(start);
    reverse_iterator<iterator> reverse_start(finish);

    while (start != finish && reverse_start != reverse_finish) {
        if (!condition(*start) || !condition(*reverse_start) || *start != *reverse_start)
            return false;

        start++;
        reverse_start++;

        if (start == reverse_start.base())
            break;

    }
    return true;
}