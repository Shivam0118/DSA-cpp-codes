#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
static const char *s[]={"one","two","three","four","five","six","seven","eight","nine"};
	if(n==0){
		cout<<"1"<<endl;
	}
	else if(n>=1 && n<=9){
		cout<<s[n-1];
	}
	else{
		cout<<n<<"greater than nine";
	}
	return 0;
}

