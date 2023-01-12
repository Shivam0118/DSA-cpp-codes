#include<iostream>
using namespace std;
class A{
	public:
	~A(){
			cout<<" i am a destructor of b"<<endl;
		}
};

class B:public A{

	public:
		~B(){
			cout<<"I am a destructor of a"<<endl;
			//a=40;
		}
};

class C:public B{
	public:
	
		~C(){
			cout<<"i am a destructor of c"<<endl;
		}
};

int main(){
	C b1;
}
