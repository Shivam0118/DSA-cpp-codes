#include<iostream>
using namespace std;

	int swap(int *x,int *y)
	{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int n,arr[n];	
	cout<<"ENTER THE SIZE OF AN ARRAY";
	cin>>n;
	cout<<"\nENTER THE ARRAY ELEMENTS"<<endl;
	for(int i=0;i< n;i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<n-1;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap (&arr[j],&arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}
	return 0;
}


