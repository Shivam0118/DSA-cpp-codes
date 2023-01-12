#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int i,pos,item;
  cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
  cin>>n;
  cout<<"ENTER THE ELEMENT OF AN ARRAY"<<endl;
  for(int i=0;i<=n;i++){
      cin>>arr[i];
  }
  cout<<"ENETR THE NUM U WANT TO INSERT"<<endl;
  cin>>item;
  cout<<"ENTER THE POSITION THAT U WANT TO PLACE IT"<<endl;
  cin>>pos;
  if((pos>n+1)||(pos<=0)){
      cout<<"POSITION IS INVALID PLEASE ENTER THE VALID POSITION"<<endl;
  }
  else{
      for(i=n;i>=pos;i--){
          arr[i]=arr[i-1];
      }
      arr[pos-1] = item;
        n++; 
        cout<<"ARRAY ELEMENT AFTER INSERTION IS: "<<endl;
        for(i=0;i<n;i++){
            cout<<arr[i];
        }
  }
}

