#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	for(int i=0;i<5;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	v.pop_back();
	v.pop_back();
	cout<<"the size is "<<v.size()<<endl;
	cout<<"the capacity is  "<<v.capacity();
	return 0;
}
