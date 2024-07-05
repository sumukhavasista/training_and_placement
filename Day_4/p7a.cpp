#include<iostream>
#include<string>
using namespace std;
int main()
{ 
   int *ptr = (int * )malloc(5 * sizeof(int)); ;
  for(int i=0;i<5;i++)
  {
      cin >> *(ptr + i);
  
  }
  for(int i=0;i<5;i++)
  {
      cout<<*(ptr+i)<<"";
      
  }
}