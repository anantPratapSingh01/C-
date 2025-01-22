#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    
    for(int i=0; i<3; i++){
        cout << "Element at index " << i << " : " << arr[i] << endl;
    
    }
    delete[]arr;
    return 0;
}