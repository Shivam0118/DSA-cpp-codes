#include<stdio.h>
int main(){
	int n;
	printf("ENTER YOUR AGE ---->");
	scanf("%d",&n);
	if (n==18||n>18){
		printf("You are eligible for voting ");
		
	}
		else if(n!=18){
			printf("You are not eligible for voting ....BE PATIENT..");
		}
//	else {
//	printf("check you number");
///	}
	return 0;
}
