#include<iostream>                                                              
using namespace std;                                                 
struct stack{
	int size;
	int top;
	int *arr;
};
int isempty(struct stack *ptr){
if(ptr->top==-1){
	return -1;
}	
else{
	return 0;
}
}
int isfull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return -1;
	}
	else{
		return 0;
	}
}
int main(){
     /*struct stack s;
	 s.size=80;
	 s.top-1;
	 s.arr=(int*)malloc(s.size*sizeof(int));*/
	struct stack *s;
    s->size=80;
	s->top-1;
	s->arr=(int*)malloc(s->size*sizeof(int));
	//s->arr[0]=7;
	//s->top++;
	if(isempty(s)){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is not empty"<<endl;
	}
}
