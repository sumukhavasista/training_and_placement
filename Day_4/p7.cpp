#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int;
    for(int i=0; i<5; i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0; i<5; i++)
    {
        cout<<*(ptr + i)<<"  ";
    }
}