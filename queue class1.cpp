#include<iostream>
using namespace std;
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        cout<<"\nThis Queue is full"<<endl;
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        
        cout<<"Enqueued ="<<val<<" ";
    }
}
 
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"This Queue is empty"<<endl;
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
 
 
int main(){
    struct queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
	cout<<"\nDequeuing element "<<dequeue(&q);
    cout<<"\nDequeuing element "<<dequeue(&q);
	cout<<"\nDequeuing element "<<dequeue(&q); 
   // enqueue(&q,45);
    
    /*if(isEmpty(&q)){
        cout<<"Queue is empty\n";
    }
    if(isFull(&q)){
        cout<<"Queue is full\n";
    }*/
}
