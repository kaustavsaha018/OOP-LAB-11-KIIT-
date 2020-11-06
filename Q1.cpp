#include<iostream>
using namespace std;
template<typename T> void swap(T *ptr1, T *ptr2){
    T temp;
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp; 
}

int main(){
    int num1;
    int num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<endl<<"Enter number 2: ";
    cin>>num2;
    swap<int>(&num1,&num2);
    cout<<"\nAfter swapping:"<<endl;
    cout<<"\nNumber 1: "<<num1;
    cout<<"\nNumber 2: "<<num2;

    return 0;
}