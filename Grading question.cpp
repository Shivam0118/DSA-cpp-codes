/*2. write a program to create a grading system first take input from user and get the marks if-->
marks=70-a grade
marks=60-b grade
marks=50-c grade
marks=40-d grade
else fail*/
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"ENTER YOUR MARKS :  "<<endl;
	cin>>marks;
	if(marks>=61&&marks<=70){
		cout<<"YOU GOT "<<marks<< " "<<"MARKS AND 'A' GRADE"<<endl; 
	}
	else if(marks>=51&&marks<=60){
		cout<<"YOU GOT "<<marks<<" "<< "MARKS AND 'B' GRADE"<<endl; 
	}
	else if(marks>=41&&marks<=50){
		cout<<"YOU GOT "<<marks<<" "<< "MARKS AND 'C' GRADE"<<endl; 
	}
	else if(marks==40){
		cout<<"YOU GOT "<<marks<< " "<<"MARKS AND 'D' GRADE"<<endl; 
	}
	else if(marks>=75){
		cout<<"YOUR GOT "<<marks<<" "<<"MARKS AND A+ GRADE "<<endl;
	}
	else{
		cout<<"YOU ARE FAIL IN EXAM, YOUR MARKS IS  " << marks<<endl;
	}
	return 0;
}
