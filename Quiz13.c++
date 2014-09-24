/*
CS378: Quiz #13 (10 pts) <Thanh>
*/

/* -----------------------------------------------------------------------
 1. Fill in the TWO blanks below:
    [The Open-Closed Principle]
    (2 pts)

    Software entities (classes, modules, functions, etc.) should be open
    for <BLANK>, but closed for <BLANK>.

extension
modification
*/

/* -----------------------------------------------------------------------
 2. What is the output of the following program?
    (7 pts)

f(T)
f(T*)
f<int*>(int*)

f(T)
f(T*)
f(T)
*/

#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

template <typename T>
string f (T) {
    return "f(T)";}

template <>
string f<int*> (int*) {
    return "f<int*>(int*)";}

template <typename T>
string f (T*) {
    return "f(T*)";}

int main () {
    int    i = 2;
    double d = 3;

    cout << f(i)        << endl;
    cout << f<int>(&i)  << endl;
    cout << f<int*>(&i) << endl << endl;

    cout << f(d)           << endl;
    cout << f<double>(&d)  << endl;
    cout << f<double*>(&d) << endl;

    return 0;}
