//polymorphism

#include<bits/stdc++.h>
using namespace std;

class PLY
{
    public : 
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum (int a, int b, int c)
    {
        return a + b;
    }
    double sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    PLY a;
    cout<<a.sum(10, 20, 49);
}