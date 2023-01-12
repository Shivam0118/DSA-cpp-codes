#include<stdio.h>
#include<stdlib.h>
struct myArray{
	int total_size;
	int user_size;
	int *ptr;
};
void createArray(struct myArray *a,int tsize,int usize){
	a->total_size * tsize;
	a->user_size * usize;
	a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct myArray *a){
	for(int i=0; i < a->user_size; i++){
		printf("%d\n",(a->ptr)[i]);
	}
}
void setval(struct myArray *a){
	int n;
	for(int i=0; i < a->user_size; i++){
		printf("enetr element %d  ",i);
		scanf("%d",&n);
		(a->ptr)[i]=n;
	}
}


int main(){
	struct myArray marks;
	createArray(&marks,10,2);
	setval(&marks);
	show(&marks);
	return 0;
}
