#include<iostream>
using namespace std;
struct Node{
	int key;
	struct Node *left;
	struct Node *right;
	int height;
	
};
int getheight(struct Node *n){
	if(n==NULL){
		return 0;
	}
	return n->height;
}

struct Node *createNode(int key){
	struct Node *node=(struct Node*)malloc(sizeof(struct Node));
	node->key=key;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	
	return node;
}
int max(int a, int b){
	return a>b?a:b;
}
int getbalanceFactor(struct Node*n){
	if(n==NULL){
		return 0;
	}
	return getheight(n->left)- getheight(n->right);
}

int struct Node* rightRotate(struct Node *y){
	struct Node* x = y->left;
	struct Node* T2 = x->right;
	
	x->right=y;
	y->left=T2;
	
	x->height= max(getheight(x->right),getheight(x->left) + 1);
	y->height=max(getheight(y->right),getheight(y->left) + 1);
	return x;
}

int struct Node* leftRotate(struct Node *x){
	struct Node* y = x->right;
	struct Node* T2 = y->left;
	
	y->left=x;
	x->right=T2;
	
	x->height= max(getheight(x->right),getheight(x->left) + 1);
	y->height=max(getheight(y->right),getheight(y->left) + 1);
	
	return y;
}

struct Node *insert(struct Node *node, int key){
	if(node==NULL){
		return (createNode(key));
	}
	if(key<node->key){
		node->left=insert(node->left, key);
	}
	else if(key > node->key){
		node->right=insert(node->right, key);
		return node;
	}
	node->height=1+max(getheight(node->left), getheight(node->right));
	int bf=getbalanceFactor(node);
	//LL CASE
	if(bf>1 && key<node->left->key){
		return rightRotate(node);
	}
	//RR CASE
	if(bf<-1 && key>node->right->key){
		return leftRotate(node);
	}
	
	if(bf>1 && key>node->left->key){
		node->left=leftRotate(node->left);
		return rightRotate(node);
	}
	
	if(bf<-1 && key<node->right->key){
		node->right=rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
}
int main(){
	struct Node * root =NULL;
	root=insert(root,45);
	root=insert(root,4);
	root=insert(roots,3);
	root=insert(root,5);
	root=insert(root,8);
	root=insert(root,9);
	return 0;
}

