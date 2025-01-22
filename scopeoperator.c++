#include <iostream>
using namespace std;

class base{
    int a;
    public:
    base(int a){
        this->a=a;

    }
    void display();
};
void base::display(){
    cout<<"Base class a: "<<a<<endl;
}
int main(){
    base b1(2);
    b1.display();
    return 0;
}