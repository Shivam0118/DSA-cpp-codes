/*1. WRITE A C++ PROGRAM USING ARITHMETIC OPERATOR AND MAKE A ADDITION, SUBTRACTION,MULTIPLICATION AND DIVISION P\OF TWO NUMBERS.
2.  WRITE A C++ PROGRAM  to check the condition using conditional operator(ternary operator).
3. WRITE A C++ PROGRAM USING ASSIGNMENT OPERATOR AND MAKE A ADDITION, SUBTRACTION,MULTIPLICATION AND DIVISION P\OF TWO NUMBER.
*/
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int choose;
	cout<<"ENTER THE NUMBER 1 : "<<endl;
	cin>>a;
	cout<<"ENTER THE NUMBER 2 : "<<endl;
	cin>>b;
	cout<<"CHOOSE ANY ONE OF THEM\n1.ADD 2.SUB 3.MULTI 4.DIVISION "<<endl;
	cin>>choose;
	switch(choose){
		case 1 : cout<<"ADD OF "<<a<<" and "<<b<<"="<<a+b;
		break;
		case 2 : cout<<"ADD OF "<<a<<" and "<<b<<"="<<a-b;
		break;
		case 3 : cout<<"ADD OF "<<a<<" and "<<b<<"="<<a*b;
		break;
		case 4 : cout<<"ADD OF "<<a<<" and "<<b<<"="<<float(a/b);
		break;
		default : cout<<"YOUR SELECTION IS WRONG"<<endl;
		break;
		
	}
	return 0;
	
}
