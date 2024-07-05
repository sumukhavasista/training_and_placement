#include<bits/stdc++.h>
using namespace std;
class Demo
{
    public:
    char stuSection;
    int stuScore;
    string subName;

    void display()
    {
        cout<<stuSection<<"  "<<stuScore<< "  "<<subName<<endl;
    }
};

int main()
{
    Demo d;
    d.stuSection = 'A';
    d.stuScore = 87;
    d.subName = "Mathematics";
    d.display();
}