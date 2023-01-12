#include<stdio.h>
#include<string.h>
int main(){
	int password;
	
	printf("ENTER THE PASSWORD : ");
	scanf("%d",&password);
      //n=strcmp(password);
	if(password<8){
		printf("PASSWORD MUST BE 8 CHARACTERS");
	}  
	else{
		printf("VALID PASSWORD");
	}  return 0;
}

