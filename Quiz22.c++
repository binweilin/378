/*
CS378: Quiz #22 (10 pts) <Sam>
*/

/* -----------------------------------------------------------------------
 1. For each call to accumulate<II, T, BF>() specify the value BF.
    (9 pts)

int (*) (int, int)
plus<int>
int (*) (int, int)
multiplies<int>
*/

#include <cassert>    // assert
#include <functional> // multiplies, plus
#include <iostream>   // cout, endl
#include <numeric>    // accumulate

using namespace std;

template <typename T>
T my_plus (T x, T y) {
    return x + y;}

template <typename T>
T my_multiplies (T x, T y) {
    return x * y;}

int main () {
    using namespace std;
    int a[] = {2, 3, 4};

    assert(accumulate(a, a + 3, 0, my_plus<int>)         ==  9);
    assert(accumulate(a, a + 3, 0,    plus<int>())       ==  9);
    assert(accumulate(a, a + 3, 1, my_multiplies<int>)   == 24);
    assert(accumulate(a, a + 3, 1,    multiplies<int>()) == 24);
    return 0;}
