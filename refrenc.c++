#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a=3;
    int &b=a;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}