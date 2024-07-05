#include<bits/stdc++.h>
using namespace std;
class car
{
    public : string color;
    int model;
    car (string c, int m)
    {
        color = c;
        model = m;
        cout<<color<<"  "<<model<<endl;
    }
};

int main()
{
    car c ("Blue", 2024);
}