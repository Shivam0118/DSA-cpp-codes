#include<stdio.h>
int factorial(int);
int main(){
	int a ,f;
	printf("ENTER THE VALUE :");
	scanf("%d",&a);
	f=factorial(a);
	printf("\nfactorial of %d  is %d",a,f);
     return 0;
}
int factorial(int x){
	int f=1,i;
	for (i=x;i>=1;i--){
	f=f*i;
	}
	
	
}
