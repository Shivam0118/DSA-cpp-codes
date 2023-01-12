/*
A PROGRAM THAT WILL EXAMINE THE VALUE OF A FLOATING POINT VARIABLE CALLED f_temp and print one of  the following messages,depending on the value.


ICE(IF TEMP IS LESS THAN TO 0)
WATER (IF TEMP BETWEEN 0AND 100)
STEAM(IT TEMP EXCEED 100)
*/

#include<stdio.h>
#include<conio.h>
int main(){
	floata f_temp;
	printf("Enter the number--->");
	scanf("%f",&f_temp);
	
	if (f_temp<0){
		printf("ICE");
	}
	else if(f_temp<=100){
		printf("WATER");
	}
	else 
		printf("STEAM");
	
	return 0;
}
