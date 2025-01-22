#include <iostream>
using namespace std;

class base{
    int a;
    int b;
    public:
    base(){
        cout <<"defult costrecter "<<endl;
        a = 0;
        b = 0;
    }
    base(int a,int b){
        cout <<"parameter constrector "<<endl;  
        this->a=a;
        this->b=b;
    }
    base(int a){
        cout <<"parameter constrector with one parameter "<<endl;
        this->a=a;
        b=0;
    }
    void display();
    ~base(){
        cout <<"destructor called "<<endl;
    }
};
void base ::display(){
    cout <<"a = "<<a <<" b = "<<b<<endl;
}
int main(){
    base b1;
    b1.display();
    base b2(3,4);
    b2.display();
    base b3(5);
    b3.display();
    return 0;
}