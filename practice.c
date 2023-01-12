/*A 5-digit positive integer is entered through the keyboard, write a
recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.*/
#include<stdio.h>
int add(int ,int);
int main(){
	int num1,num2,sum;
	printf("ENTER THE 5 DIGIT NUMBER : ");
	scanf("%d",&num1);
  	printf("ENTER THE 5 DIGIT NUMBER : ");
	scanf("%d",&num2);
	sum=add(num1,num2);
	printf("\nsum=%d",sum);
	return 0;
}
int add(int a,int b){
	int sum;
	sum=a+b;
//	return sum;
}
