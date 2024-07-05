#include <iostream>
using namespace std;

class DayOfWeek {
    private:
        string dayName[7];
        int dayNumber;

    public:
        DayOfWeek(int num) {
            dayName[0] = "Sunday";
            dayName[1] = "Monday";
            dayName[2] = "Tuesday";
            dayName[3] = "Wednesday";
            dayName[4] = "Thursday";
            dayName[5] = "Friday";
            dayName[6] = "Saturday";
            
            if(num < 1 || num > 7) {
                cout << "Error 404!." << endl;
                exit(1); 
            } else {
                dayNumber = num;
            }
        }

        void displayDay() {
            cout << "It is " << dayName[dayNumber - 1] << endl;
        }
};

int main() {
    int dayNumber;
    
    cout << "enter the day number ";
    cin >> dayNumber;

    DayOfWeek day(dayNumber);

    day.displayDay();

    return 0;
}
