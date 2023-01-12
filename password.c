/*WRITE A PROGRAM WHICH DISPLAY ERROR MESSAGE ON OUTPUT SCREEN WHEN USER PASSWORD IS LESS THAN 8 CHARACTERS.*/
#include<stdio.h>
#include<string.h>
int main(){
	char password[8];
	int n;
	
	printf("ENTER THE PASSWORD : ");
	scanf("%s",&password);
	n=strlen(password);
	printf("length of string =%d",n);
    return 0;
}

    
