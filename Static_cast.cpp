#include <iostream>
using namespace std;

int main()
{
int a = 28;
int b = 3;
float x = a/b;
float y = static_cast<float>(a)/b ;
cout<<endl<< " Before static_cast = " << x <<endl;
cout << " After static_cast = " << y << endl;
return 0;
}