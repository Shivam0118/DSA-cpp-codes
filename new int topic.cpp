#include<iostream>
using namespace std;
class student{
	public:
		student(){
			cout<<"constructor is used"<<endl;
			
		}
		~student(){
			cout<<"destructor is called"<<endl;
			
		}
};
int main(){
	student *f=new student[6];
	delete f;
}
