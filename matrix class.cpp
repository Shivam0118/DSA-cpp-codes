#include<iostream>
using namespace std;
class matrix{
	public:
	int row[20];
	int col[20];
	int hello(int k,int l){
		for(int i=0;i<k;i++){
			for(int j=0;j<l;j++){
	cout<<"hello";
			}
		cout<<"\n"<<endl;
		}
	}
};
int main(){
	int row[20];
	int col[20];
	cout<<"ENTER THE ROW ELMENTS: "<<endl ;
	cin>>row[20];
	cout<<"\nENTER THE COL ELEMENTS: ";
	cin>>col[20];
	matrix m1;
	m1.hello(3,3);
}
