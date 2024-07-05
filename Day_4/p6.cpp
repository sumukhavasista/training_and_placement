#include<bits/stdc++.h>
using namespace std;

int main()
{
    string *ptr;
    ptr = new string;
    *ptr = "MONTY";
    cout<<*ptr;
    delete ptr;
}