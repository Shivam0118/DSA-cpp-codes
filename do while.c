/*DISPLAY 1 TO 40 USING OF DO WHILE LOOP.
WRITE A PROGRAAM TAHT ACCEPTS ABN INTEGER N;
IF  N=5,THEN PRINT THE PYRAMID AS SHOWN 
55555
4444
333
22
1
*/
#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER--->");
	scanf("%d",&n);
	do{
		printf("\n%d",n);
		n++;
	}while(n<=40);
	
	return 0;
}
