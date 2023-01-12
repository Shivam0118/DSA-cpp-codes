#include<iostream>
using namespace std;
int main(){
	double *p=new double;
	*p=23;
	cout<<"value is="<<*p<<endl;
	delete p;
}
