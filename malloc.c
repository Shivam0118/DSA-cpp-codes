/*write  aprogram to find the maximum of two numbers using macro
write  a macro to calculate the average  of three numbers 
*/
#include<stdio.h>
int main(){
	char *str;
	str=(char *)malloc(50);
	strcpy(str,"hello c");
	printf("string= %s  and  address= %u  ",str,str);
	str=(char *)realloc(str,20);
	strcat(str,"shivam");
	printf("\nstring= %s and address = %u ",str,str);
	return 0;
}
