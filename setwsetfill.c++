#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num= 50;
    cout << "using number by setw"<<setw(10)<<num<<endl;
    cout <<" using setfill"<<setfill('*')<<setw(10)<<num<<endl;
    return 0;
}