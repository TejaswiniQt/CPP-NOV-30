#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    cout<<a<<endl;
    cout<<b<<endl;
    a = 20;
    cout<<a<<endl;
    cout<<b<<endl;
    b = 40;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}