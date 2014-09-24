/*
CS378: Quiz #19 (10 pts) <Sam>
*/

/* -----------------------------------------------------------------------
 1. Define the function my_accumulate such that it behaves as follows:
    (9 pts)
*/

#include <cassert>    // assert
#include <functional> // minus, plus
#include <iostream>   // cout, endl
#include <list>       // list
#include <numeric>    // accumulate

template <typename II, typename T, typename BF>
T my_accumulate (II b, II e, T v, BF f) {
    while (b != e) {
        v = f(v, *b);
        ++b;}
    return v;}

int main () {
    using namespace std;

    const list<int> x = {2, 3, 4};

    assert(my_accumulate(x.begin(), x.end(), 0, plus<int>())  ==  9); // 0 + 2 + 3 + 4
    assert(   accumulate(x.begin(), x.end(), 0, plus<int>())  ==  9); // 0 + 2 + 3 + 4

    assert(my_accumulate(x.begin(), x.end(), 0, minus<int>()) == -9); // 0 - 2 - 3 - 4
    assert(   accumulate(x.begin(), x.end(), 0, minus<int>()) == -9); // 0 - 2 - 3 - 4

    cout << "Done." << endl;
    return 0;}
