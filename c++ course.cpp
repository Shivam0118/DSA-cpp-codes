/*
THERE ARE TWO TYPES OF HEADER FILE-->
1.SYSTEM header file -->It comes with compiler.
2. USER defined header file--> it  is written by the programmer.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int c=10;
int main(){
/*	int a,b,c;
	cout<<"ENTER THE VALUE OF A:"<<endl;
	cin>>a;
	cout<<"ENTER THE VALUE OF b:"<<endl;
	cin>>b;
	c=a+b;
	cout<<a+b<<endl;
	cout<<::c;
	
*///reference variable.
/*int x=76;
int &y=x;
int&z=y;
cout<<x<<endl;
cout<<y<<endl;	
cout<<z<<endl;		
*/

//**************TYPE CASTING *************
/*int a=24;
float b=76.5;
     cout<<double(a);
cout<<(int)b<<endl;	
*/
/********CONSTANTS     MANEPULATOR*********
int a=1,b=34,c=7894;
cout<<setw(4)<<a<<endl;
cout<<setw(4)<<b<<endl;
cout<<setw(4)<<c<<endl;
*/
//OPERATOR PRECEDENCE
int a=3,b=4;
int c=a*5+b-45+67;
cout<<c;














	return 0;
}
