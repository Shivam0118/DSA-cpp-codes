#include<iostream>
using namespace std;

class Base{
	public:
		int x =5;
    protected:
		int y=2;
	private:
		int z;
};

class Publicderived:public Base{
	public:
		void show(){
			cout<<"The value of X,Y AND Z are"<<x<<" "<<y<<endl;
		}
	
	//x is public and u can access it 
	//y is protected
	//z is not accessed 
};

class Protectedderived:protected Base{
	public:
	void show2(){
			cout<<"The value of X,Y AND Z are"<<x<<" "<<y<<endl;
		}
	
};
class Privatederived:private Base{
	public:
	void show3(){
			cout<<"The value of X,Y AND Z are"<<x<<" "<<y<<endl;
		}
};

int main(){
	
	Privatederived objp;
	objp.show3();
	
	Protectedderived objpd;
	objpd.show2();	
	Publicderived objpc;
	objpc.show();
}
