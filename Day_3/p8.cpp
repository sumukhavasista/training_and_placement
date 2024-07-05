#include<bits/stdc++.h>
using namespace std;
class College
{
    public : int cID; string cName;
    College(int cID, string cName)
    {
        this->cID = cID;
        this->cName = cName; 
    }

    void display()
    {
        cout<<cID<<"  "<<cName<<endl;
    }
};

int main()
{
    College c1(33, "Jyothy");
    c1.display();
}