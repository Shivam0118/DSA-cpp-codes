#include<iostream>
using namespace std;
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int full(struct queue* q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int empty(struct queue* q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}
int enqueue(struct queue *q,int val){
	if(full(q)){
		cout<<"This queue is full"<<endl;
	}
	else{
		q->r++;
		q->arr[q->r]=val;
		cout<<"Enqueued = "<<val<<" "<<endl;
	}
	
}
int dequeue(struct queue *q){
	int a=-1;
	if(empty(q)){
		cout<<"This queue is empty"<<endl;
	}
	else{
		q->f++;
		a=q->arr[q->f];
	
	}
	
}
int main(){
	struct queue q;
	q.size=5;
	q.r=q.f=0;
	q.arr=(int*) malloc(q.size*sizeof(int));
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
//	enqueue(&q,60);
	cout<<"\nDequeued = "<<dequeue(&q)<<endl;
	cout<<"Dequeued = "<<dequeue(&q)<<endl;
	cout<<"Dequeued = "<<dequeue(&q)<<endl;

	if(full(&q)){
		cout<<"This queue is full"<<endl;
	}
    if(empty(&q)){
		cout<<"This queue is empty"<<endl;
	}
	
	
	
}
