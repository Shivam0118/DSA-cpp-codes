#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};

struct Node* deletionAtfirst(struct Node*head){
	struct Node* ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

struct Node* deletionInbetween(struct Node*head,int index){
	struct Node*p=head;
	struct Node*q=head->next;
	
	for(int i=0;i<index-1;i++)
	{
	p=p->next;
	q=q->next;
	
    }
	p->next=q->next;
	free(q);
	return head;
}

struct Node*deletionAtLast(struct Node*head){
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

struct Node*deletionthenode(struct Node*head,int value){
struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
    p->next = q->next;
    free(q);
    }
    else if(q->data!=value)
	{
    	cout<<"WRONG VALUE"<<endl;
	}
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
	struct Node*four;
	head=(struct Node*)malloc(sizeof(struct Node));
	one=(struct Node*)malloc(sizeof(struct Node));
	two=(struct Node*)malloc(sizeof(struct Node));
	three=(struct Node*)malloc(sizeof(struct Node));
	four=(struct Node*)malloc(sizeof(struct Node));	
	head->data=7;
	head->next=one;
	
	one->data=11;
	one->next=two;
	
	two->data=28;
	two->next=three;
	
	three->data=32;
	three->next=four;
	
	four->data=48;
	four->next=NULL;
	cout<<"TRAVERSAL LINKED LIST ELEMENTS: "<<endl;
	display(head);
	cout<<endl;
/*	cout<<"AFTER DELETION AT FIRST NODE:"<<endl;
	head=deletionAtfirst(head);
	display(head);
	*/cout<<endl;
	
	int index;
/*	cout<<"AFTER DELETION IN BETWEEN :"<<endl;
	cin>>index;
	head=deletionInbetween(head,index);	
	display(head);
	cout<<endl;
	cout<<"AFTER DELETION AT LAST: "<<endl;
    head=deletionAtLast(head);
	display(head);
*/	cout<<endl;
	cout<<"AFTER DELETION THE NODE  : ";
	int value;
	cin>>value;
	head=deletionthenode(head,value);
	display(head);
	return 0;
}
