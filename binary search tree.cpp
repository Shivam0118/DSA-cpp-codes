#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*left,*right;
};
Node *root=NULL;
Node *LOC=NULL, *PAR=NULL;
void search(int item){
	Node *ptr,*save;
	if(root==NULL){
		LOC=NULL;
		PAR=NULL;
		return;
	}
	if(root->data==item){
		LOC=root;
		PAR=NULL;
		return;
	}
	if(root->data>item){
		ptr=root->left;
		save=root;
	}
	else{
		ptr=root->right;
		save=root;
	}
	while(ptr!=NULL){
		if(ptr->data==item){
			LOC=ptr;
			PAR=save;
			return;
		}
		if(ptr->data>item){
			save=ptr;
			ptr=ptr->left;
		}
		else{
			save=ptr;
			ptr=ptr->right;
		}
	}
	LOC=NULL;
	PAR=save;
}
void insert(int n){
	search(n);
	if(LOC!=NULL){
		cout<<"element already exist";
		return;
	}
	Node *n1=new Node;
	n1->data=n;
	n1->left=NULL;
	n1->right=NULL;
	if(PAR==NULL)
	root=n1;
	else{
		if(PAR->data>n){
			PAR->left=n1;
		}
		else
		PAR->right=n1;
	}
}
void preorder(Node *ptr){
	if(ptr!=NULL){
		cout<<ptr->data<<",";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
int main(){
	insert(40);
	insert(50);
	insert(30);
	insert(60);
	insert(33);
	insert(68);
	preorder(root);
						
}
