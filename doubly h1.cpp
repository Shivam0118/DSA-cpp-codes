#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};
void display(struct Node*N1){
	struct Node* last;
	cout<<"Traversal in forward direction\n";
	while(N1!=NULL){
		cout<<N1->data<<"\a ";
		last=N1;
		N1=N1->next;
	}
    cout<<"\nTraversal in reverse direction"<<endl;
    while(last!=NULL){
    	cout<<last->data<<"\a ";
    	last=last->prev;
	}
}
/*void display1(struct Node*N1)
{  
    struct Node *ptr;  
    ptr = N1;  
    while(ptr != NULL)  
    {  
	cout<<ptr->data<<" ";  
        ptr=ptr->next;  
    }  
} 
  struct Node*insertionAtFirst(struct Node*N1,int data){
    struct Node *ptr;
   if(N1==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=data;  
       N1=ptr;  
   }  
   return N1;
}  */
     
int main(){
	struct Node* N1=(struct Node*)malloc(sizeof(struct Node));
	struct Node* N2=(struct Node*)malloc(sizeof(struct Node));
	struct Node* N3=(struct Node*)malloc(sizeof(struct Node));
	struct Node* N4=(struct Node*)malloc(sizeof(struct Node));
	struct Node* N5=(struct Node*)malloc(sizeof(struct Node));
	
	N1->data=1;
	N1->next=N2;
	N1->prev=NULL;
	
	N2->data=2;
	N2->next=N3;
	N2->prev=N1;

	N3->data=3;
	N3->next=N4;
	N3->prev=N2;

	N4->data=4;
	N4->next=N5;
	N4->prev=N3;
	
	N5->data=5;
	N5->next=NULL;
	N5->prev=N4;
	display(N1);
	cout<<endl;
	//cout<<"After insertion at first"<<endl;
	//N1=insertionAtFirst(N1,9);
	//display1(N1);

}
