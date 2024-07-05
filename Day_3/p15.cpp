#include<bits/stdc++.h>
using namespace std;

class TVS
{
    public : virtual void displayVehicle() = 0;
    void display()
    {
        cout<<" Hello MONTY";
    }
};

class Ntorq : public TVS
{
    public : void displayVehicle()
    {
        cout<<"My name is Ntorq, mielage is 10kmpl\n";
    };
};

int main()
{
    Ntorq nt;
    nt.displayVehicle();
}