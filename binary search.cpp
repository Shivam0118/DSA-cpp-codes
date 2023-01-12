#include<iostream>
using namespace std;
int main(){
    int first,last,mid,n;
    int arr[10],i,num;
    cout<<"ENTER THE ARRAT ELEMENT"<<endl;
    for(i=0;i<10;i++){
    cin>>arr[10];
    }
    cout<<"ENTER THE NUM THE U WANT TO SEARCH"<<endl;
    cin>>num;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last){
       if (arr[mid] < num)
      first = mid + 1;
    else if (arr[mid] == num) {
      cout<<" found at location"<<num<<" "<<mid+1;
      break;
    }else{
            last=mid-1;
            mid = (first + last)/2;
        }
    }
    if(first > last){
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}

