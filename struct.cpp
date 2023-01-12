#include<iostream>
using namespace std;
	typedef struct student{
		int id;
		char name[100];
		int age;
		
	}ep;

int main(){
       
	   ep s1;///struct student s1;
    cout<<"ENTER THE ID: "<<endl;
    cin>>s1.id;
    cout<<"ENTER THE NAME OF STUDENT: "<<endl;
    cin>>s1.name;
    cout<<"ENTER THE AGE OF STUDENT : "<<endl;
    cin>>s1.age;
    
    cout<<"ID OF STUDENT: "<<s1.id<<endl<<"NAME OF STUDENT :"<<s1.name<<endl<<"AGE OF STUDENT :"<<s1.age;
    return 0;
   
}
