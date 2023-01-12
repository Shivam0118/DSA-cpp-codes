#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
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
struct Node*insertAtEnd(struct Node*head,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node*p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct Node* insertTheNode(struct Node*head,struct Node* prenode,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=prenode->next;
	prenode->next=ptr;
	
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
/*	cout<<"AFTER INSERTION IN BETWEEN LINKED LIST"<<endl;
	int index;
	cin>>index;
    insertAtbetween(head,30,index);
	display(head);
	cout<<endl;
	cout<<"Insertion at End"<<endl;
	insertAtEnd(head,90);
	display(head);
*/  cout<<endl;
    cout<<"INSERTION AFTER THE NODE"<<endl;
    head=insertTheNode(head,two,87);
    display(head);
    return 0;
}
