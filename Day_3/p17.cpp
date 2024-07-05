#include <bits/stdc++.h>
using namespace std;

class Money {
private:
    int rupee;
    int paisa;

public:
    
    Money(int r = 0, int p = 0) : rupee(r), paisa(p) {}

        int getRupee() const {
        return rupee;
    }

    int getPaisa() const {
        return paisa;
    }

    
    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
    }

    
    Money add(const Money& other) const {
        int totalPaisa = paisa + other.paisa;
        int totalRupee = rupee + other.rupee + totalPaisa / 100;
        totalPaisa = totalPaisa % 100;
        return Money(totalRupee, totalPaisa);
    }

    
    void display() const {
        cout << fixed << setprecision(2) << rupee << "." << (paisa < 10 ? "0" : "") << paisa << endl;
    }
};

int main() {
    int rupee1, paisa1, rupee2, paisa2;

    cout << "Enter the first amount (rupee and paisa separated by a space): ";
    cin >> rupee1 >> paisa1;
    cout << "Enter the second amount (rupee and paisa separated by a space): ";
    cin >> rupee2 >> paisa2;

    Money amount1(rupee1, paisa1);
    Money amount2(rupee2, paisa2);

    Money totalAmount = amount1.add(amount2);

    totalAmount.display();

    return 0;
}
