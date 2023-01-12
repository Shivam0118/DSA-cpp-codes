#include<iostream>
using namespace std;

class base{
	protected :
		int a;
		public:
			Base(){
				a=0;
			}
};
class Derived1:protected Base{
	protected:
		int b;
};
class Derived2:private Derived1{
	private:
		int c;
		
};
class DerivedDerived:public Derived2{
	public:
		void show(){
			cout<<a<<endl<<b<<endl<<c;
		}
};
int main(){
	DerivedDerived d;
	d.show();
	return 0;
}
