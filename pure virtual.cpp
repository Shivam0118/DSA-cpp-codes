#include<iostream>
using namespace std;

class A{
	public:
		virtual void show()=0;
		virtual void print()=0;             // PURE VIRTUAL FUNCTION .
		virtual void display()=0;
};
class B:public A{
	public:
		void show(){
			cout<<"I am a show function"<<endl;
			
		}
		void print(){
			cout<<"I am a print function"<<endl;
			
		}
		void display(){
			cout<<"I am a display function"<<endl;
		}
};
int main(){
	A *ptr;
	B bt;
	bt.display();
	
	ptr->display();
	ptr->print();
}
