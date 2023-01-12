#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"T am a parent class"<<endl;
			//a=20;
		}
};

class B:public A{

	public:
		B(){
			cout<<"I am a child class of a"<<endl;
			//a=40;
		}
};

class C:public A{
	public:
		C(){
			cout<<"I am a child of b";
		}
};

int main(){
	C b1;
}
