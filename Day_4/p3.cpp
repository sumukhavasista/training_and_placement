#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName = "Child";
    string lastName = " Monty";
    firstName.append(lastName);
    cout<<firstName;
    return 0;
}