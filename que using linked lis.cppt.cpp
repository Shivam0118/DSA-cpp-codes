#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node * f=NULL;
struct Node * r=NULL;

void display(struct Node* ptr)
{
	cout<<"elements of the linked list : "<<endl;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void enqueue(int val)
{
	struct Node *n=(struct Node*)malloc(sizeof(struct Node));
	if(n==NULL){
		cout<<"Queue is full"<<endl;
	}
	else{
		n->data=val;
		n->next=NULL;
		if(f==NULL){
			f=r=n;
		}
		else{
			r->next=n;
			r=n;
		}
	}
}
dequeue(){
	
}
int main(){
	enqueue(34);
	enqueue(7);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	enqueue(9);
	display(f);
	
}
