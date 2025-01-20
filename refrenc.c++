#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    //value variable
    int a=3;
    //refrence variable
    int &b=a;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}