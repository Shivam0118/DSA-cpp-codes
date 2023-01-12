#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
void linkedtraversal(struct Node* ptr){
	while(ptr!=NULL){
	
	cout<<"\nELEMENT is: "<<ptr->data<<" ";
	ptr=ptr->next;
	
	}
}


int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;		
	struct Node *fourth;	
	struct Node *fifth;	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
	head->data=7;
    head->next=second;
    
    second->data=11;
    second->next=third;
    
	third->data=65;
    third->next=fourth;
    
    fourth->data=15;
    fourth->next=fifth;
    
    fifth->data=88;
    fifth->next=NULL;
    
    linkedtraversal(head);
	return 0;
	}
