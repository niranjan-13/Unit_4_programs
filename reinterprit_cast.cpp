#include<iostream>
using namespace std;
int main()
{
    /*
    Reinterpret_cast is a type of casting operator used in C++.

    It is used to convert one pointer of another pointer of any type, 
    no matter either the class is related to each other or not.
    */

    int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    cout << *p << endl;// It prints value
    cout << *ch << endl;
    cout << p << endl; // It prints address 
    cout << ch << endl;

    return 0;
}