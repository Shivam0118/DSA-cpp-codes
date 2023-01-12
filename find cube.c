#include<stdio.h>
int main(){
	int n;
	int c;
	printf("ENTER THE NUMBER---->");
	scanf("%d",&n);
	if(n==0){
		printf("the cube of 0 is 0");
	}
	else if(n==1){
		printf("the cube of 1 is 1");
	}
	else{
		c=n*n*n;
		printf("the cube of %d is %d",n,c);
		
	}
	return 0;
}
