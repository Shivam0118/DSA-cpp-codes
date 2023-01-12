#include<iostream>
using namespace std;

class Car{
	public:
    virtual void model()=0;
    virtual void seat()=0;
    virtual void tyre()=0;
};
class print:public Car{
	public:
		void model(){
			cout<<"I am a model of the car"<<endl;
			
		}
		void seat(){
			cout<<"I am a four seater car"<<endl;
		}
		void tyre(){
			cout<<"I have  MRF tyres"<<endl;
		}
};
int main(){
	Car *c;
	print p1;
	p1.tyre();
	
	c->tyre();
	c->seat();
}
