#include<bits/stdc++.h>
using namespace std;

class parent
{
    public : int rollNumber = 121;
    void display()
    {
        cout<<rollNumber;
    }
};

class Child : public parent
{

};
int main()
{
    Child c;
    c.display();
}