//WAP to illustrate structure in C++
#include <iostream>
using namespace std;
struct student{
    int roll_no;
    string name;
    string branch_name;
    float marks;
};

int main(){
    student s1;
    s1.roll_no = 18;
    s1.name = "luv";
    s1.branch_name = "Computer Science";
    s1.marks = 95.5;
    
    cout << "Student Details:" << endl;
    cout << "Roll No: " << s1.roll_no << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch_name << endl;
    cout << "Marks: " << s1.marks << endl;
    


    return 0;
}