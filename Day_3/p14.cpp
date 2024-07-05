#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public : void makeSound()
    {
        cout<<"Animals are making sounds\n";
    };
};

class Cat : public Animal
{
    public : void makeSound()
    {
        cout<<"Cat is making sound\n";
    };
};

class Dog : public Animal
{
    public : void makeSound()
    {
        cout<<"Dog is barking\n";
    };
};

int main()
{
    Cat c;
    c.makeSound();
    
    Dog d;
    d.makeSound();
}