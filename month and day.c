/*2. ACCEPTS THE NO. OF THE YEAR FROM A USER AND DISPLAY IT IN MONTHS AND DAYS.*/

#include<stdio.h>
int main(){
	int year;
	int month;
	int days;
	printf("ENTER THE YEAR__-->");
	scanf("%d",&year);
	printf("YOU ENTER %d YEAR=\n\n",year);
	
	if(year==1){
		printf("\n12 MONTHS and 365 DAYS");
	}
	else if(year>=2){
		month=year*12;
		days=year*365;
		printf("%d MONTHS AND %d DAYS",month,days);
	}
	return 0;
}
