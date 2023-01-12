#include<iostream>
using namespace std;

void MyHandler(){
	
	try{
		throw "hello";
	}catch(const char* s){
		cout<<"the error is "<<s<<endl;
		throw;
	}
}

int main(){
	cout<<"Start"<<endl;
	try{
		MyHandler();
	}catch(const char*){
		cout<<"i am from the main block"<<endl;
	}
	cout<<"Its end";
}
