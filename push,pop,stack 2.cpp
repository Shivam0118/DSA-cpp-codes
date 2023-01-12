#include<iostream>
using namespace std;
struct stack {
	int size;
	int top;
	int *arr;
};
int isFull(struct stack* ptr) {
	if(ptr->top==ptr->size-1) {
		return 1;
	} else {
		return 0;
	}
}

void push(struct stack*ptr,int val) {
	if(isFull(ptr)) {
		cout<<"STACK OVERFLOW ! CANNOT PUSH "<<val<<" TO THE STACK"<<endl;
	} else {
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}

}
int isEmpty(struct stack* ptr) {
	if(ptr->top==-1) {
		return 1;
	} else {
		return 0;
	}
}

int pop(struct stack*ptr) {
	if(isEmpty(ptr)) {
		cout<<"STACK UNDERFLOW ! CANNOT POP FROM THE STACK"<<endl;
	    return -1;
	} 
	else {
		int val=ptr->arr[ptr->top];
	    ptr->top--;
	    return val;
	}

}
int main() {
	struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr=(int*)malloc(sp->size* sizeof (int));
	cout<<"\nStack has been created successfully"<<endl;

	cout<<"\nBefore Pushing Full= "<<isFull(sp)<<endl;
	cout<<"\nBefore Pushing Empty= "<<isEmpty(sp)<<endl;

	push(sp,1);
	push(sp,2);
	push(sp,3);
	push(sp,4);
	push(sp,5);
	push(sp,6);
	push(sp,7);
	push(sp,8);
	push(sp,88);
	push(sp,22);
	cout<<"\nAfter Pushing Full= "<<isFull(sp)<<endl;
	cout<<"\nAfter Pushing Empty= "<<isEmpty(sp)<<endl;
	cout<<"\nPopped "<<pop(sp)<<" from the stack"<<endl;
	cout<<"\nPopped "<<pop(sp)<<" from the stack"<<endl;
	cout<<"\nPopped "<<pop(sp)<<" from the stack"<<endl;
	
	return 0;
}







