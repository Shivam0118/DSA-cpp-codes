#include <bits/stdc++.h>
using namespace std;
 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/* Driver code */
int main()
{
    int n,arr[n];
    //int n = sizeof(arr) / sizeof(arr[0]);
     cout<<"ENTER N"<<endl;
     cin>>n;
     cout<<"enetr the array"<<endl;
     for(int i=0;i<n;i++){
     	cin>>arr[i];
	 }
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
 