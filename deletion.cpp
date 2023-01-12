#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int i,pos;
  cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
  cin>>n;
  cout<<"ENTER THE ELEMENT OF AN ARRAY"<<endl;
  for(int i=0;i<=n;i++){
      cin>>arr[i];
  }
  cout<<"ENTER THE POSITION THAT U WANT TO DELETE IT"<<endl;
  cin>>pos;
      for(i=pos;i<=n-1;i++){
          arr[i]=arr[i+1];
      }
     n=n-1; 
        cout<<"ARRAY ELEMENT AFTER DELETION IS: "<<endl;
        for(i=0;i<n;i++){
            cout<<arr[i];
        }
  
}


