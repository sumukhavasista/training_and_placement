#include<bits/stdc++.h>
using namespace std;

class Student
{
    private : int rollNumber; string stuName;
    public : void setRollNumber (int r)
    {
        rollNumber = r;
    };
    void setStuName(string s)
    {
        stuName = s;
    }
    int getRollNumber()
    {
        return rollNumber;
    }
    string getStuName()
    {
        return stuName;
    }
};

int main()
{
    Student stu;
    stu.setRollNumber(50);
    
    stu.setStuName("DANTE");
    cout<<stu.getRollNumber()<<"  "<<stu.getStuName()<<endl;
}