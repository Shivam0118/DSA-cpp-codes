/*3.  write a program to create a call center program using switch case statement
if user will press
1 select language english
2 select language hindi
3 select language punjabi
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"_..........WELCOME TO OUR CALL CENTER PROGRAM..........._"<<endl;sss
	cout<<"\aENTER THE NUMBER WHICH LANGUAGE YOU HAVE TO CHOOSE"<<endl;
	cin>>n;
	switch(n){
		case 1 : cout<<"YOU SELECTED ENGLISH LANGUAGE"<<endl;
		break;
		case 2 : cout<<"YOU SELECTED HINDI LANGUAGE"<<endl; 
        break;
		case 3 : cout<<"YOU SELECTED PUNJABI LANGUAGE"<<endl;	
		break;
		default : cout<<"YOU entered wrong number\a"<<endl;
	    break;
	    return 0;
	}
}
