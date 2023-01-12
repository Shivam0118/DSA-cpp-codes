#include<iostream>
using namespace std;
int tower(int n,char s,char a,char d){
	if(n==1){
	cout<<s<<"--->"<<d<<endl;
    }
	else{
	tower(n-1,s,d,a);
	cout<<s<<"--->"<<d<<endl;
	tower(n-1,s,d,a);
	}
}
int main(){
	int n,steps;
	cout<<"ENETR THE NUMBER OF DISCS WE HAVE"<<endl;
	cin>>n;
    steps=tower(n,'S','A','D');
}
