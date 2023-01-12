/* WRITE A PROGRAM TO FIND WHETHER AN ENTERED NUMBER IS ODD OR EVEN USING MODULO AND CONDITIONAL OPERATORS


2. ACCEPTS THE NO. OF THE YEAR FROM A USER AND DISPLAY IT IN MONTHS AND DAYS.
*/
#include<stdio.h>
int main(){
	int n;
	int r;
	printf("Enter the number==");
	scanf("%d",&n);
	
	if(n%2==0){
		printf ("%d is even number",n);
		}
		else{
			printf("%d is odd number",n);}
			return 0;
}
