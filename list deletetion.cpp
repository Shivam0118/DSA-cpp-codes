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
void deleteNodeAtEnd(){
	node *ptr=start;
	while(ptr->next->next!=NULL){
		ptr=ptr->next;
	}
	node* temp=ptr->next;
	
	ptr->next=NULL;
	delete temp;
}
int main()
{
	addAtBig(7);
	addAtBig(11);
	addAtBig(78);
	addAtBig(90);
	addAtBig(45);
	display();
	cout<<endl;
 deleteNodeAtEnd();
	display();


}
