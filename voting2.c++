/*WRITE A PROGRAM TO GET AGE OF USER AND PRINT IT ALSO CHECK ELIGIBLE OR NOT FOR VOTING ?
2. write a program to create a grading system first take input from user and get the marks if-->
marks=70-a grade
marks=60-b grade
marks=50-c grade
marks=40-d grade
else fail
3.  write a program to create a call center program using switch case statement
if user will press
1 select language english
2 select language hindi
3 select language punjabi
*/
#include<iostream>
using namespace std;
int main(){
	char name[20];
	int age;
	cout<<"ENTER YOUR NAME: "<<endl;
	cin>>name;
	
	cout<<"ENTER YOUR AGE: ";
	cin>>age;
	if (age<18){
		cout<<"....YOU ARE NOT ELIGIBLE FOR VOTING.... "<<endl;
	}
	else if(age>=18){
		cout<<"....YOU ARE ELIGIBLE FOR VOTING...."<<endl;
	}
} 
