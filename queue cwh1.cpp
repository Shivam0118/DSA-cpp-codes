#include<iostream>
using namespace std;
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int isFull(struct queue* q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int isEmpty(struct queue* q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}
void enqueue(struct queue *q,int val){
	if(isFull(q)){
		cout<<"QUEUE IS FULL"<<endl;
	}
	else{
		q->r++;
		q->arr[q->r]=val;
	}
}
int dequeue(struct queue *q){
	int a = -1;
	if(isEmpty(q)){
		cout<<"QUEUE IS empty"<<endl;
	}
	else{
		q->f++;
		a = q->arr[q->f];
	}
	return a;
}
int main(){
	struct queue q;
	q.size=100;
	q.f = q.r = -1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	enqueue(&q,12);
	enqueue(&q,13);
	enqueue(&q,1);
	
	cout<<"Dequeuing "<<dequeue(&q)<<endl;
	cout<<"\nDequeuing "<<dequeue(&q)<<endl;
	cout<<"\nDequeuing "<<dequeue(&q)<<endl;
	if(isEmpty(&q)){
	cout<<"\nQUEUE IS EMPTY"<<endl;
	}
	if(isFull(&q)){
	cout<<"\nQUEUE IS FULL"<<endl;
	}
	return 0;
}
