#include<iostream>
using namespace std;

class A{
public:

void show(){
cout<<"Hello A"<<endl;
}
};

class B:public A{

};


class C:public A{

};

class D:public B,public C{

};

int main(){

D obj;

obj.C::show(); // using scope resolution
obj.B::show();


}
