#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public : int usn=11;
    void show()
    {
        cout<<usn<<" "<<endl;
    }
};

class Child:public Parent
{
    public:string name="gad";
    void dis()
    {
        cout<<name;
    }


};

class Child1:public Child
{
    
};
int main()
{
    Child c;
    c.show();
    Child1 a;
    a.dis();
    
}