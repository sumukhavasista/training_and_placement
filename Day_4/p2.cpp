#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName = "Child";
    string lastName = " Monty";
    string fullName = firstName.append(lastName);
    cout<<fullName;
    return 0;
}