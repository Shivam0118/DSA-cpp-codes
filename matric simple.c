#include<stdio.h>
int main(){
//	int k,l;
int matrix[3][3],i,j;
/*printf("enter no.of row=");
scanf("%d",&k);
printf("enter no.of col=");
scanf("%d",&l);*/
printf("ENTER THE ELEMENTS: ");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&matrix[i][j]);
	}
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("%d ",matrix[i][j]);
	}
	printf("\n");	
}
return 0;
}
