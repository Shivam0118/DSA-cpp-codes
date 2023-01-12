#include<iostream>
using namespace std;

class Base{
	
	public:
		int a;
		Base(int g){
			a=g;
			
		}
		Base operator++(){
			a=++a;
		    return Base(a);
	            		
		}
		void display(){
			cout<<a;
		}
};

int main(){
	Base b(3);
	++b;
	b.display();
	
}
