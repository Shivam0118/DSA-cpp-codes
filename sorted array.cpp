#include<iostream>
//<bits/stdc++.h>
using namespace std;
int swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	cout<<"ENTER THE SIZE OF ARRAY: "<<endl;
	int n;
	cin>>n;
	int a[n];
	cout<<"Enter the array: "<<endl;
	int *p;
	p=&a[0];
	for(int i=0;i<n;i++)
	cin>>*(p+i);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
			if(*(p+j)<*(p+i))
			swap(*(p+j),*(p+i));		
	}
	cout<<"SORTED ARRAY\a"<<endl;
	for(int i=0;i<n;i++)
	cout<<*(p+i)<<" ";
	return 0;
	
}
