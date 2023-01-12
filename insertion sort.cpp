
#include<iostream>
using namespace std;
void insert(int arr[],int n){
    int i,j,key;
 for(int i=1;i<n;i++){
	key=arr[i];
    j=i-1;
	while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=key;
      
	  }
 	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
 }
int main(){	
    int n,arr[n];
    cout<<"ENTER THE SIZE OF AN ARRRAY  ";
    cin>>n;
    cout<<"\nENTER THE ARRAY ELEMENT"<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	insert(arr,n);
}
	
