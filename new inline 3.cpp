/* WRITE A PROGRAM TO CREATE A INLINE FUNCTION
1 ADDITON
2 SUB
3 MULTI
4 DIVISION*/
#include<iostream>
using namespace std;
inline double add(double a,double b){
	cout<<"ADDITION OF "<<a<<"and "<<b<<"= "<<a+b<<endl;
	}
	inline double sub(double a,double b){
	cout<<"SUBTARCTION OF "<<a<<"and "<<b<<" ="<<a-b<<endl;
	}
	inline double multi(double a,double b){
	cout<<"MULTIPLICATION OF "<<a<<"and "<<b<<"= "<<a*b<<endl;
	}
	inline double div(double a,double b){
	cout<<"DIVISION OF "<<a<<"and "<<b<<"= "<<a/b<<endl;
	}
int main(){
	double x,y;
	cout<<"ENTER THE x : "<<endl;
	cin>>x;
	cout<<"ENTER THE y: "<<endl;
	cin>>y;
	cout<<add(x,y)<<endl;
	cout<<sub(x,y)<<endl;
	cout<<multi(x,y)<<endl;
	cout<<div(x,y)<<endl;
}
