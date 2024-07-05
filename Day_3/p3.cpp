#include<bits/stdc++.h>
using namespace std;
class p3
{
    public:
    int stuNumber;
    string stuName;

    void display (int n, string s)
    {
        stuNumber = n;
        stuName = n;
        cout<<stuNumber<<"  "<<stuName<<endl;
    }
};

int main()
{
    p3 p;
    p.display(222, "panvith");
}