#include<iostream>
using namespace std;
class student{
	public:
		student(){
			cout<<"constructor is used";
			
		}
		~student(){
			cout<<"destructor is called";
			
		}
};
int main(){
	student *f=new student[6];
	delete f;
}
