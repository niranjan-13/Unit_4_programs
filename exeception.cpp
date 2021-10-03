#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    try
    {
        if(y==0)
        throw 1;
        else
        cout<<"x / y = "<<float(x)/y ;
    }
    catch(int)
    {
        cout<<"Division not possible ";
    }
    
return 0;
}
