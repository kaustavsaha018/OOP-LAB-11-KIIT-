#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of the array: "<<endl;
    try{
        int i=0;
        while(true){
            if(i>size){
            throw i;
        }
        else{
            cin>>arr[i];
            i++;
        }
        }
        
    }
    catch(int){
        cout<<"\nArray out of bound exception"<<endl;
    }
    return 0; 
}