#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

    struct Node* insertionAtFirst(struct Node*head,int data){
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	
	return ptr;
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
	head=insertionAtFirst(head,12);
	display(head);
}
