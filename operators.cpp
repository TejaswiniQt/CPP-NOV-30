#include<iostream>

using namespace std;

int main()
{
    //Arithmetic operators
    int a = 10, b = 5;
    cout<<"Arithmetic operators"<<endl;
    cout<<"The value of a+b is : "<<(a+b)<<endl;
    cout<<"The value of a-b is : "<<(a-b)<<endl;
    cout<<"The value of a*b is : "<<(a*b)<<endl;
    cout<<"The value of a/b is : "<<(a/b)<<endl;
    cout<<"The value of a%b is : "<<(a%b)<<endl;

    //Increment and decrement operators
    cout<<"ncrement and decrement operators"<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of --a is : "<<--a<<endl;

    //Relational operators
    cout<<"Relational operators"<<endl;
    cout<<"The value of a==b is : "<<(a==b)<<endl;
    cout<<"The value of a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of a<b is : "<<(a<b)<<endl;
    cout<<"The value of a>b is : "<<(a>b)<<endl;
    cout<<"The value of a<=b is : "<<(a<=b)<<endl;
    cout<<"The value of a>=b is : "<<(a>=b)<<endl;

    //Logical operators
    cout<<"Logical operators"<<endl;
    cout<<"The value of ((a==b) && (a>b)) is : "<<((a==b) && (a>b))<<endl;
    cout<<"The value of ((a==b) || (a>b)) is : "<<((a==b) || (a>b))<<endl;
    cout<<"The value of (!(a==b)) is : "<<(!(a==b))<<endl;

    return 0;
}