#include <bits/stdc++.h>
using namespace std;

class College {
public:
    void m() {
        cout << "I am M function\n";
    }

    void n() {
        this->m();
        cout << "I am N function\n"; 
    }
};

int main() {
    College clg;
    clg.n();
    return 0;
}
