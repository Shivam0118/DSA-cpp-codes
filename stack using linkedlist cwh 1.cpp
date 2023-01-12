#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};

struct Node* top=NULL;
int isEmpty(struct Node* top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct Node* top){
	struct Node*n=(struct Node*)malloc(sizeof(struct Node));
	if(n==NULL){
		return 1;
	}
	else{return 0;
	}
}
struct Node* push(struct Node* top,int x){
	struct Node*n=(struct Node*)malloc(sizeof(struct Node));
	if(isFull(top)){
		cout<<"stack overflow"<<endl;
	}
	else{
		n->data=x;
		n->next=top;
		top=n;
		return top;
	}
}
int pop(struct Node* tp){
	if(isEmpty(tp)){
		cout<<"STACK UNDERFLOW"<<endl;
	}
	else{
		struct Node* n=tp;
		top=tp->next;
		int x=n->data;
		free(n);
		return x;
	}
}

void display(struct Node*ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main(){
	//METHOD ONE TO PUSH AN ELEMENT INTO STACK
//  top=push(top,78);
//	top=push(top,7);
//	top=push(top,6);
	
	//METHOD TWO TO PUSH AN ELEMENT INTO STACK.
    int num,n;
    cout<<"ENETR HOW MUCH ELEMENT U WNAT TO PUSH INTO STACK------> ";
    cin>>n;
    cout<<"\nENETR THE NUMBER U WANT TO PUSH INTO THE STACK----->";
    for (int i=0;i<n;i++){
    cin>>num;
    top=push(top,num);
  }	
  cout<<"\nPUSHED ELEMENTS ARE ----->";
    display(top);
	int ele=pop(top);
	cout<<"\nPOPPED ELEMENTS IS------> "<<ele<<endl;
	cout<<"\nAFTER POPPING THE ELEMEMT-----> ";
	display(top);
}
