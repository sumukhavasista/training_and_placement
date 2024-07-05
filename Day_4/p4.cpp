#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ("Hello");
    cout<<"The string is : "<<str<<"\n";

    str.insert(2, "zzz");
    cout<<"The modified string: "<<str;
}