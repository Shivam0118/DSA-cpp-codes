#include<iostream>
using namespace std;
struct car{
	int car_price;
	char car_name[20];
	int car_model;
	char car_owner[20];
};
int main(){
	 struct car c1;
    cout<<"ENTER THE CAR NAME :"<<endl;
	cin>>c1.car_name;
	cout<<"ENTER THE CAR MODEL :"<<endl;	
	cin>>c1.car_model;
	cout<<"ENTER THE CAR OWNER :"<<endl;
	cin>>c1.car_owner;
	cout<<"ENTER THE CAR PRICE  :"<<endl;
	cin>>c1.car_price;
	
	cout<<"CAR NAME :"<<c1.car_name<<endl<<"CAR MODEL no. :"<<c1.car_model<<endl<<"CAR OWNER NAME: "<<c1.car_owner<<endl<<"CAR PRICE :"<<c1.car_price;
	return 0;
}
