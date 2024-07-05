#include<iostream>
using namespace std;

struct Student
{
    int regNum = 50;
    string stuName;
    float marks;
    Student()
    {
        cout<<"I am a constructor\n";
    } 
    void display()
    {
        cout<<"Hii";
    }
};

int main()
{
    Student stu;
    stu.stuName = "Setu Skanda";
    stu.marks = 69.96;
    cout<<stu.regNum<<"  "<<stu.stuName<<"  "<<stu.marks<<endl;
    stu.display();
}