#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public : 
    void sound(){
        cout << "Some sound" << endl;
    }
};

class Mammal : public Animal