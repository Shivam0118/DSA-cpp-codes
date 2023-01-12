#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};

 struct Node* insertionAtFirst(struct Node*head,int data){
    struct Node*ptr= (struct Node *)malloc(sizeof(struct Node));// where i point the data
	ptr->data=data;
    struct Node*p=head->next;
    while(p->next!=head){
    	p=p->next;
	}                                 //at this point p point to the last node of this circular ll.
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
 	
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
 void display(struct Node*head){
   	struct Node*ptr=head;
 do{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
   }
 	while(ptr!=head);
 }
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
    cout<<"Circular Linkd list before insertion\n";
    display(head);
    cout<<endl;
    cout<<"Circular linked list After insertion At first node is \n";
    head=insertionAtFirst(head,5);
    head=insertionAtFirst(head,7);
    head=insertionAtFirst(head,8);
    head=insertionAtFirst(head,2);
    display(head);
    cout<<endl;
    cout<<"Circular LL After insertion in between\n";
	head=insertAtbetween(head,80,2);
    display(head);
    return 0;
	
	}
