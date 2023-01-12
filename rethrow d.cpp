#include<iostream>
using namespace std;

class Test{
	public:
		Test(){
			cout<<"I am a test from constuctor"<<endl;
		}
		~Test(){cout<<"I am a test from destructor"<<endl;
		}
};


int main(){
	try{
		Test t1;
		throw 10;
	}catch(int i){
		cout<<"catch"<<i;
	}
}
