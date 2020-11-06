#include<iostream>
using namespace std;

int main(){
    int x;
    float y;
    char z;

    int i=1;
    while(i<=3){
        try{      
            if(i==1){
                i++;
                throw(x);
            }
            if(i==2){
                i++;
                throw(y);
            }
            if(i==3){
                i++;
                throw(z);    
            }    
        }
        catch(char){
            cout<<"\nchar type encountered";
        }
        catch(float){
            cout<<"\nfloat type encountered";
        }
        catch(int){
            cout<<"\nint type encountered";
        }
    }
    return 0;
}