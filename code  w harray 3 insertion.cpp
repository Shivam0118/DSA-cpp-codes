#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};
struct Node*insertAtFirst(struct Node *head,int data){                               //O(1)
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

struct Node*insertAtbetween(struct Node *head,int data,int index){                    //O(n)
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node * p =head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

struct Node*insertAtEnd(struct Node *head,int data){                     //O(n)
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;	
	struct Node* p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
	
}

struct Node*insertAfterNode(struct Node *head,struct Node *preNode,int data){                     //o(n)
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;	
	ptr->next=preNode->next;
	preNode->next=ptr;
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
	cout<<"INSERT THE ELEMENT AT FIRST INDEX: "<<endl;
	head=insertAtFirst(head,15);
	display(head);
	cout<<endl;
	cout<<"INSERT THE ELEMENT IN BETWEEN THE LINKED LIST ELEMENTS: "<<endl;
	int index;
	cout<<"Enter the index where you want to put the element:  ";
	cin>>index;
	insertAtbetween(head,30,index);
	display(head);
	cout<<endl;
	cout<<"INSERT THE ELEMENT IN END THE LINKED LIST ELEMENTS: "<<endl;
	insertAtEnd(head,45);
	display(head);
	cout<<"\n"<<endl;
	cout<<"INSERTION AFTER A NODE"<<endl;
	head=insertAfterNode(head,two,56);
	display(head);
}
