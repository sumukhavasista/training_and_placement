#include<bits/stdc++.h>
using namespace std;
 union item
 {
    int a;
    float b;
    char ch;
 };

 int main()
 {
    item it;
    it.a = 12;
    cout<<it.a<<endl;

    it.b = 20.2;
    cout<<it.b<<endl;
    
    it.ch = 'z';
    cout<<it.ch<<endl;
    return 0;
 }