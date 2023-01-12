
#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selection_sort(int arr[],int n1){
    int i,j,min;
    for(i=0;i<n1-1;i++){
        min=i;
        for(j=i+1;j<n1;j++)
            if(arr[j]<arr[min])
            min=j;
            swap(&arr[min],&arr[i]);
        
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
}
 
int main(){
    int n,arr[n];
    cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE "<<n<<" ARRAY ELEMENT "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"AFTER SELECTION SORTING"<<endl;
    printArray(arr,n);
    
}


