#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

void display(struct Node *head){
    struct Node *ptr = head;
    do{
       cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=head);
}
struct Node* insertAtFirst(struct Node*head,int data){
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node*p=head->next;
	while(p->next!=head){
		p=p->next;
	}//at this p point to the last node of the linked list
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
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
	
	head->data=4;
	head->next=one;
	
	one->data=3;
	one->next=two;
	
	two->data=6;
	two->next=three;
	
	three->data=1;
	three->next=head;
	cout<<"\nCircular linked list before insertion"<<endl;
	display(head);
	head=insertAtFirst(head,80);
	head=insertAtFirst(head,90);
	head=insertAtFirst(head,89);
	cout<<"\nCircular linked list after insertion"<<endl;
	display(head);
	return 0;
}
