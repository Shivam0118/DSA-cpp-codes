/*WRITE A PROGRAM OF C++ TO CREATE NAMED STUDENT WHICH CONTAIN TWO VARIABLES ID AND NAMES,NOW CREATE AN OBJECT nd store the id and name values in the object and print it*/
#include<iostream>
using namespace std;
class student{
    public:
	int id;
	char names[10];
	char collage[50];
	long long int no;
};
int main(){
	student s1;
	 cout<<"ENTER THE NAME OF STUDENT"<<endl;
	cin>>s1.names;
	cout<<"ENTER THE ID OF Student"<<endl;
	cin>>s1.id;
	cout<<"ENTER THE COLLAGE NAME OF STUDENT"<<endl;
	cin>>s1.collage;	
	cout<<"ENTER THE MOBILE NO. OF STUDENT"<<endl;
	cin>>s1.no;
	cout<<"\nNAMES OF THE STUDENT:      "<<s1.names<<endl;
	cout<<"ID OF THE STUDENT:           "<<s1.id<<endl;
	cout<<"COLLAGE NAME OF THE STUDENT: "<<s1.collage<<endl;
	cout<<"MOBILE NO. OF THE STUDENT:   "<<s1.no<<endl;
}
