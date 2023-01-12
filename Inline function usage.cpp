/* WRITE A PROGRAM TO CREATE A INLINE FUNCTION
1 ADDITON
2 SUB
3 MULTI
4 DIVISION*/
#include<iostream>
using namespace std;
inline double math(double a,double b){
	cout<<"ADDITION OF "<<a<<"and "<<b<<"= "<<a+b<<endl;
	cout<<"SUBTARCTION OF "<<a<<"and "<<b<<" ="<<a-b<<endl;
	cout<<"MULTIPLICATION OF "<<a<<"and "<<b<<"= "<<a*b<<endl;
	cout<<"DIVISION OF "<<a<<"and "<<b<<"= "<<a/b<<endl;
}

int main(){
	double x,y;
	cout<<"ENTER THE x : "<<endl;
	cin>>x;
	cout<<"ENTER THE y: "<<endl;
	cin>>y;
	cout<<math(x,y);
}
