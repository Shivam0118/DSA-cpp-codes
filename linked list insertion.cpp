#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *start=NULL;

node* createNode(int a){
	node *n1 =new node();
	n1->data=a;
	n1->next=NULL;
	return n1;
}
void addAtBig(int a){
	node *newNode=createNode(a);
	if(start==NULL)
	start=newNode;
	else{
		newNode->next=start;
		start=newNode;
	}
}
void addAtEnd(int a){
	node *newNode=createNode(a);
	if(start==NULL)
	start=newNode;
	else{
		node *ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr=ptr->next;
	}
}
void display(){
	node *ptr=start;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
void insertionbetween(int a){
	int n;
	cout<<"AFTER WHICH NODE U WANT TO PALCE THE ELEMENT"<<endl;
	cin>>n;
	if(start==NULL){
		return;
	}
	
		node* ptr=start;
	    while(ptr->data!=n){
	    	ptr=ptr->next;
		}
		node*temp=createNode(a);
		temp->next=ptr->next;
		ptr->next=temp;
}
int main()
{
	addAtBig(7);
	addAtBig(11);
	addAtEnd(15);
	addAtBig(78);
	addAtBig(90);
	addAtEnd(49);
	addAtBig(45);
	cout<<endl;
	insertionbetween(65);
	display();


}
