/*WRITE A PROGRAM THAT TAKES 10 ELEMENT FROM A USER AND STORES IT IN AN ARRAY AND DISPLAY THAT ELEMENTS.*/
#include<stdio.h>
int main(){
	int arr[10];
	int i;
	printf("ENTER THE NUMBER-->");
	for(i=0;i<10;i++){
        
	scanf("%d ",&arr[i]);
	printf("\narr[%d]=%d ",i,arr[i]);
	}
	return 0;
}
