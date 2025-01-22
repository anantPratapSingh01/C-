#include <iostream>
using namespace std;
class employees{
    int id, salary;
    public:
    employees(){}  // Default constructor
    employees(int i, int s){
        id = i;
        salary = s;
    }
    void display(){
        cout <<"Employee id : " << id <<endl;
        cout <<"Employee salary : " << salary <<endl;
    }
};
class programer:public employees{
    string name;
    string sector;
    public:
    programer(){}
    programer(int i, int s, string n, string sec): employees(i,s){
   
        name = n;
        sector = sec;
    }
    void display(){
        employees::display();
        cout <<"Employee name : " << name <<endl;
        cout <<"Employee sector : " << sector <<endl;
    }
};
int main(){
    programer p(1, 5000, "Anant", "Software Engineer");
    p.display();
    return 0;
}