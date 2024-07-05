//oops

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int stuNumber;
    string stuName;

    void display()
    {
        cout<<stuNumber<<"  "<<stuName<<endl;
    }
};

int main()
{
    Student s;
    s.stuNumber = 050;
    s.stuName = "Sumukha";
    s.display();
}



//data security = encapsulation