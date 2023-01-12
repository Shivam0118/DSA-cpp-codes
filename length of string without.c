/*WRITE A PROGRAM TO A\FIND A LENGTH OF STRING WITHOUT USING STRLEN FUNCTION OR RECURSION.*/
#include<stdio.h>
int main(){
	int i;
	char name[20];
	printf("ENTER THE STRING : ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';++i);
		printf("\nTHE LENGTH OF STRING IS : %d ",i);
	
    return 0;		
}
