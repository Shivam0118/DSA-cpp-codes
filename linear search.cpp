#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n],i,element;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    cout<<"ENETER THE ARRAY ELEMENT "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENETER THE ELEMENT TO SEARCH"<<endl;
    cin>>element;
    for(i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"ITEM IS FOUND AT "<<i<<endl;
            break;
        }
       
    }
      if(arr[i]!=element){
            cout<<"element is not found"<<endl;
        }
        return 0;
    
}



