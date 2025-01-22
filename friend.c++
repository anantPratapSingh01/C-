#include <iostream>
#include <iomanip>
using namespace std;

class complex{
    int real,imag;
    friend complex sumcomplex(complex o1,complex o2);
    public:
    complex(int x,int y){
        real = x;
        imag = y;
    }
    
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};

complex sumcomplex(complex o1,complex o2){
    complex c4(0,0);
    c4.real = o1.real + o2.real;
    c4.imag = o1.imag + o2.imag;
    return c4;
}
int main (){
    complex c1(3,2),c2(3,2);
    c1.display();
    c2.display();
    complex c3 = sumcomplex(c1,c2);
    c3.display();
    return 0;
}


