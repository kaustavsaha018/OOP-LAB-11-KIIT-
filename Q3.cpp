#include<iostream>
using namespace std;

int main(){
    float x;
    float y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"\nEnter the value of y: ";
    cin>>y;
    cout<<"\nPerforming division x/y..."<<endl;
    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<"The Result is: "<<x/y;
        }
    }
    catch(float){
        cout<<"\nDivision by zero exception"<<endl;
    }
    return 0; 
}