/*
CS378: Quiz #14 (10 pts) <Sam>
*/

/* -----------------------------------------------------------------------
 1. The algorithm std::reverse() is explicitly defined for which two
    kinds of iterators?
    (2 pts)

BI and RI
*/

/* -----------------------------------------------------------------------
 2. The algorithm std::distance() is explicitly defined for which two
    kinds of iterators?
    (2 pts)

II and RI
*/

/* -----------------------------------------------------------------------
 3. What is the output of the following?
    (5 pts)

f(random_access_iterator_tag)
f(input_iterator_tag)
*/

#include <iostream> // cout, endl
#include <iterator> // input_iterator_tag, random_access_iterator tag
#include <list>     // list
#include <string>   // string

using namespace std;

template <typename II>
string f (II, II, input_iterator_tag) {
    return "f(input_iterator_tag)";}

template <typename RI>
string f (RI, RI, random_access_iterator_tag) {
    return "f(random_access_iterator_tag)";}

template <typename I>
string f (I b, I e) {
    return f(b, e, typename iterator_traits<I>::iterator_category());}

int main () {
    int a[] = {2, 3, 4};
    cout << f(a, a + 3) << endl;

    list<int> x = {2, 3, 4};
    cout << f(x.begin(), x.end()) << endl;
    return 0;}
