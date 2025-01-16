//WAP in c++ to print patter
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    int n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    // Prints the first half of the pattern
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}