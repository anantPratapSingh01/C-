//WAP in c++ to show function overloads

#include <iostream>
using namespace std;

// function definition
 void area(int l,int b){
    cout << "Area of rectangle: " << l * b << endl;
}

// function definition with same name but different parameter types
void area(int r=3){
    cout << "Area of circle: " << 3.14 * r * r << endl;
}

int main() {
    int length = 5, breadth = 10;
    
    
    area();  // function call with integer argument
    area(length, breadth); 
    return 0;

}