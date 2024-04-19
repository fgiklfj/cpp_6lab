#ifndef INC_2LAB6_14_ITERATOR_H
#define INC_2LAB6_14_ITERATOR_H

template<typename iterator, typename predicat>
bool anyОf(iterator start, iterator finish, predicat condition);


template<typename iterator, typename predicat>
bool isSоrted(iterator start, iterator finish, predicat condition);

template<typename iterator, typename predicat>
bool isPalindrоme(iterator start, iterator finish, predicat condition);

#include "iterator.tpp"

#endif //INC_2LAB6_14_ITERATOR_H
