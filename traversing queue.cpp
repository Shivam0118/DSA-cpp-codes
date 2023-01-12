#include<iostream>
using namespace std;
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int full(struct queue* q){
	if(q->r=q->size-1){
		return 1;
	}
	return 0;
}
int empty(struct queue* q){
	if(q->r=q->f){
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
	}
	
}
int main(){
	struct queue q;
	q.size=5;
	q.r=q.f=0;
	q.arr=(int*)malloc(sizeof(struct queue));
	enqueue(&q,30);
	
}
