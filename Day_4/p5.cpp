#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("Welcome");
    cout<<" "<<str1<<"\n";

    string str2("Hello");
    cout<<" "<<str2<<"\n";
    str1.swap(str2);

    cout<<" "<<str1<<"\n";
    cout<<" "<<str2<<"\n";
    return 0;
}