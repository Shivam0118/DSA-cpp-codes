#include<iostream>
using namespace std;

class Shape{
	public:
	int length=4;
	int width=7;
	
	virtual void print_area()=0;
};
class rectangle:public Shape{
	public:
		void print_area(){
			cout<<"the area of rectangle="<<length*width;
		}
		
};
int main(){
	Shape *s1;
	rectangle r1;
	
	s1=&r1;
	s1->print_area();
}

