#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

void traversal(struct Node *ptr){
	while(ptr!=NULL){
		cout<<ptr->data;
		ptr=ptr->next;
	}
}
int main(){
	struct Node * head;
	struct Node * two;
	struct Node * three;
	struct Node * four;
	struct Node * five;
	struct Node * six;
	struct Node * seven;
	struct Node * eight;
	head=(struct Node *)malloc(sizeof(struct Node));
	two=(struct Node *)malloc(sizeof(struct Node));
	three=(struct Node *)malloc(sizeof(struct Node));
	four=(struct Node *)malloc(sizeof(struct Node));
	five=(struct Node *)malloc(sizeof(struct Node));
	six=(struct Node *)malloc(sizeof(struct Node));
    seven=(struct Node *)malloc(sizeof(struct Node));
    eight=(struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=two;
    
    two->data=8;
    two->next=three;
    
    three->data=9;
    three->next=four;
    
    four->data=10;
    four->next=five;
    
    five->data=11;
    five->next=six;
    
    six->data=12;
    six->next=seven;
    
    seven->data=13;
    seven->next=eight;
    
    eight->data=14;
    eight->next=NULL;
    
    traversal(head);
}
