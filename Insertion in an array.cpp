#include<iostream>
using namespace std;

void insert(int arr[],int n){
	int pos,item;
	cout<<"ENETR THE ELEMENT U WANT TO INSERT"<<endl;
	cin>>item;
	cout<<"enter the poistion where u want to insert the element"<<endl;
	cin>>pos;
	for(int i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=item;
	n++;
}
int main(){
		int n,arr[n];
	cout<<"ENTER THE SIZE OF ELEMENT"<<endl;
	cin>>n;
	cout<<"ENTER THE ARRAY ELEMENT"<<endl;
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
    insert(arr,n);

    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
  
}
