#include<iostream>
using namespace std;
class Time{
	
	int hrs,min;
	public:
		Time(int);
		void display();
	
};

Time::Time(int t){
	cout<<"Basic type-> class type conversion..."<<endl;
	hrs=t/60;
	min=t%60;
}
void Time::display(){
	cout<<"hours is="<<hrs<<endl;
	cout<<"minutes is="<<min<<endl;
	
}
int main(){
	int duration;
	cout<<"Enter the time duration in minutes->";
	cin>>duration;
	Time t1=duration;
	t1.display();
	return 0;
	}
