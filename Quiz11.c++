/*
CS378: Quiz #11 (10 pts) <Sam>
*/

/* -----------------------------------------------------------------------
 1. Define shift_left_digits() such that the following works.
    (9 pts)
*/

#include <algorithm> // equal
#include <cassert>   // assert
#include <iostream>  // cout, endl
#include <iterator>  // advance, distance, iterator_traits
#include <list>      // list

using namespace std;

template <typename II, typename FI>
FI shift_left_digits (II b, II e, int n, FI x) {
       x = copy(b, e, x);
    FI y = x;
    advance(y, n);
    fill(x, y, typename iterator_traits<II>::value_type());
    return y;}

int main () {
    using namespace std;

    {
    const int a[] = {2, 3, 4};
    const int b[] = {2, 3, 4, 0, 0};
          int x[10];
    const int* p = shift_left_digits(a, a + 3, 2, x);
    assert((p - x) == 5);
    assert(equal(const_cast<const int*>(x), p, b));
    }

    {
    const list<int>           x = {2, 3, 4};
    const list<int>           y = {2, 3, 4, 0, 0};
          list<int>           z(10);
          list<int>::iterator p = shift_left_digits(x.begin(), x.end(), 2, z.begin());
    assert(distance(z.begin(), p) == 5);
    assert(equal(z.begin(), p, y.begin()));
    }

    return 0;}
