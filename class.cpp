#include<iostream>
using namespace std;

class test
{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};

int main()
{
    test t1;
    cout<<t1.a;
    //cout<<t1.c;
    //cout<<t1.b;

    return 0;
}s