#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *f=NULL;
struct Node *r=NULL;
void display(struct Node* ptr){
	cout<<"Elements of queue using linked list is :- "<<endl;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
void enqueue(int val){
	struct Node *n=(struct Node*)malloc( sizeof (struct Node));
	if(n==NULL){
		cout<<"Queue is full"<<endl;
	}
	else{
		n->data=val;
		n->next=NULL;
		if(f==NUll){
			f=r=n;
		}
		else{
			r->next=n;
			r=n;
		}
	}
   	
   	
   }
   
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
    enqueue(4);
	enqueue(5);
	display(f);
}
