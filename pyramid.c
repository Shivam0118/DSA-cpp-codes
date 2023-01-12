/* 2. WRITE A PROGRAAM TAHT ACCEPTS ABN INTEGER N;
      IF  N=5,THEN PRINT THE PYRAMID AS SHOWN 
                 55555
                 4444
                 333
                 22
                 1
#include<stdio.h>
int main(){
	int n=5;
	int j;
		for(n=1;n<=5;n++){
			for(j=1;j<=n;j++){
				printf("%d",n);
		}
		printf("\n");
}	return 0;
}*/
#include<stdio.h>
int main(){
	int N;
	int j;
	int i;
	
	printf("ENTER THE NUMBER-->");
	scanf("%d",&N);
		for (i=N;i>=1;i--) {
    for (j=1;j<=i;j++){
				printf("%d",i);
		}
		printf("\n");
		
}
	
	return 0;
	
}








