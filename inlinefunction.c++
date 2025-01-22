//WAP in c++ to show inline functions
#include <iostream>
using namespace std;

//Inline function definition
inline void area(int l,int b){
    cout << "Area of rectangle: " << l * b << endl;
}

int main() {
    int length = 5, breadth = 10;
    area(length, breadth); //Inline function call
    return 0;

}