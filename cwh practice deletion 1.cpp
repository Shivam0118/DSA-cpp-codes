#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};

struct Node* deletionAtFirst(struct Node* head){
	struct Node* ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

struct Node*deletionAtlastNode(struct Node* head){
	struct Node*p=head;
	struct Node*q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}

void display(struct Node*ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main(){
	struct Node*head;
	struct Node*one;
	struct Node*two;
	struct Node*three;
	head=(struct Node*)malloc(sizeof(struct Node));
	one=(struct Node*)malloc(sizeof(struct Node));
	two=(struct Node*)malloc(sizeof(struct Node));
	three=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=7;
	head->next=one;
	
	one->data=11;
	one->next=two;
	
	two->data=28;
	two->next=three;
	
	three->data=32;
	three->next=NULL;
	cout<<"TRAVERSAL LINKED LIST ELEMENTS: "<<endl;
	display(head);
	cout<<endl;
	head=deletionAtFirst(head);
	cout<<"AFTER DELETION At first node"<<endl;
	display(head);
	cout<<endl;
	head=deletionAtlastNode(head);
	cout<<"AFTER DELETION AT LAST NODE"<<endl;
	display(head);
}
