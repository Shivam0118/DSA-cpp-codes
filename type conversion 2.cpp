#include<iostream>
using namespace std;

class Years{
	private:
		int year ,day;
		public:
			void display();
			void operator=(int);//operator overloading
			
};
void Years::display(){
	cout<<year<<" "<<day<<endl;
}

void Years::operator=(int d){
	cout<<"basic type conversion to class type==>";
	year=d/365;
	day=d%365;
}

int main(){
	Years t1;
	int day1;
	cout<<"The value in day";
	cin>>day1;
	t1=day1;
	t1.display();
	
	t1.operator=(int d);
	t1.display();
}
