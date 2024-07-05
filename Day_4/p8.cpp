#include<iostream>
#include<string>
using namespace std;
int main()
{ 
  string input;
  cout << "Enter a string: ";
  getline(cin,input);
 for (char &c : input) {
        if (islower(c)) {
            c = toupper(c); 
        } else if (isupper(c)) {
            c = tolower(c);  
        }
    }

    cout << "Converted string: " << input << endl;
    return 0;
}