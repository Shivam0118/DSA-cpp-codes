#include<iostream>
using namespace std;

class Vehicle{
	
	public:
	virtual void dis(){
	cout<<"I am a car"<<endl;	
	}
};

class Truck:public Vehicle{
	public:
		void dis(){
			cout<<"I am a truck"<<endl;
		}
		
};
int main(){
	Vehicle *v1;
	v1=&t1;
	v1->dis();
}
