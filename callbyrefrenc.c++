//WAP in c++ to call by reference
#include <iostream>
using namespace std;

// Function to print array using call by reference
void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// Main function
int main(){

int arr[]={0,1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);

// Function call by reference
printArray(arr,n);
return 0;

}