//WAP to add two numbers and print their average in C++
#include <iostream>

using namespace std;

int main(){
    int num1,num2;
    float average;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    average = (num1 + num2) / 2;
    cout<<"Avarage of the two number :"<<average << endl;
    return 0;


}