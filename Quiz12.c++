/*
CS378: Quiz #12 (10 pts) <Thanh>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following program?
    (9 pts)

f(T&)
f(const T&)
f(const T&)
*/

#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

template <typename T>
string f (T& v) {
    return "f(T&)";}

template <typename T>
string f (const T& r) {
    return "f(const T&)";}

int main () {
          int i  = 2;
    const int ci = 3;
    cout << f(i)  << endl;
    cout << f(ci) << endl;
    cout << f(4)  << endl;
    return 0;}
