/*
CS378: Quiz #23 (10 pts) <Thanh>
*/

#include <iostream> // boolalpha, cout, endl
#include <map>      // map
#include <utility>  // pair

using namespace std;

/* -----------------------------------------------------------------------
 1. What is the output of the following?
    (9 pts)

true true 0 2
true false 3 0 2
*/

int main () {
    cout << boolalpha;
    typedef map<int, int>        map_type;
    typedef map_type::value_type value_type;
    typedef map_type::iterator   iterator;

    map_type x;
    pair<iterator, bool> p = x.insert(value_type(2, 3));
    cout << (p.first == x.begin()) << " ";
    cout << p.second               << " ";
    cout << x[4]                   << " ";
    cout << x.size()               << endl;

    pair<iterator, bool> q = x.insert(value_type(2, 5));
    cout << (q.first == x.begin()) << " ";
    cout << q.second               << " ";
    cout << x[2]                   << " ";
    cout << x[4]                   << " ";
    cout << x.size()               << endl;
    return 0;}
