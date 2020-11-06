#include<iostream>
using namespace std;

template <class T> class Array{
	T *ptr;
	int size;
	
	public:
		Array(int s){
			size=s;
			ptr= new T[size];
		}
		void input(){
			int i;
			cout<<"\nEnter the Array elements: "<<endl;
			for(i=0;i<size;i++){
				cin>>*(ptr+i);
			}
		}
		void display(){
			int i;
			cout<<"\nThe Array is: "<<endl;
			for(i=0;i<size;i++){
				cout<<" "<<*(ptr+i);
			}
		}
        void search(T key){
            int i;
            for(i=0;i<size;i++){
                if(*(ptr+i)==key){
                    cout<<"Element found at position "<<i;
                    break;
                }
                else if(i==size-1){
                    cout<<"Element not found!";
                }
            }
        }
        void find_sum(){
            int sum=0,i;
            for(i=0;i<size;i++){
                sum=sum+*(ptr+i);
            }
            cout<<"\nThe sum of all the elements of the array is: "<<sum;
        }
        void find_largest(){
            int max=*(ptr),i;
            for(i=1;i<size;i++){
                if(max<*(ptr+i))
                    max=*(ptr+i);
            }
            cout<<"\nThe largest element in the array is: "<<max;
        }
		~Array(){
			delete ptr;
			cout<<endl<<"\nDestructor Invoked"<<endl;
		}	
};

int main(){
	int n;
	cout<<"Enter no.of Array elements: ";
	cin>>n;
	Array<int> a1(n);
	a1.input();
	a1.display();
    int key;
    cout<<"\nEnter a element to search in the Array: ";
    cin>>key;
    a1.search(key);
    a1.find_sum();
    a1.find_largest();
	return 0;
}