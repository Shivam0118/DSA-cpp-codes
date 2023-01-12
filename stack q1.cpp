#include<iostream>
using namespace std;
int n;
int top;
void push(int stack[],int a){
	if(top==n){
		cout<<"Overflow"<<endl;
		return ;
	}
	top=top+1;
	stack[top]=a;
}
void printtop(int stack[]){
    if(top==1){
    	cout<<"Stack empty";
    	return ;
    	
	}
	cout<<stack[top]<<endl;
}
void pop(int stack[]){
	if(top==-1){
		cout<<"underflow";
		return ;
	}
	top=top-1;
}
int main(){
	top=-1;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int stack[n];
	push(stack,10);
	push(stack,20);
	push(stack,30);
	pop(stack);
    printtop(stack);
}
