/*WRITE A PROGRAM OF C++ FIRST DECLARE CLASS STUDENT,STUDENT NAME, ROL NO,3 SUBJECTS,TOTAL,PERCENTAGE, IN PRIVATE OR 
IN PUBLIC 1 GETDATA()-> enter the all values all variable 2 claculate-> toatl marks and prcentage 3 display print all information
*/
#include<iostream>
using namespace std;
class Student{
	private:
		char name[20];
		int roll_no;
		int math,english,science,total;
		float percentage;
		public:
	void getdata(){
	cout<<"ENTER THE NAME OF THE STUDENT:"<<endl;
	cin>>name;
	cout<<"ENTER THE ROLLNO OF STUDENT:"<<endl;
	cin>>roll_no;
	cout<<"ENTER THE MARKS OF STUDENT  OF MATH :"<<endl;
	cin>>math;
	cout<<"ENTER THE MARKS OF STUDENT  OF ENGLISH :"<<endl;
	cin>>english;
	cout<<"ENTER THE MARKS OF STUDENT  OF SCIENCE :"<<endl;
	cin>>science;
}
void calculate(){
 //	cout<<"THE TOTAL MARKS OF THE STUDENT IS : ";
 	total=math+science+english;
 //	cout<<total<<endl;
 //	cout<<"THE PERCENTAGE OF STUDENT IS : ";
 	percentage=total/3;
 //	cout<<percentage<<endl;
 	
 }
 void display(){
 cout<<"\nNAME OF THE STDUENT IS: "<<name<<endl;
 cout<<"ROLL NO. IS : "<<roll_no<<endl;
 cout<<"TOATL MARKS IS: "<<total<<endl;
 cout<<"PERCENTAGE IS : "<<percentage<<endl;
 }
		
};

int main(){
	Student s1;
	s1.getdata();
	s1.calculate();
	s1.display();
}
