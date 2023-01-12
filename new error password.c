#include<stdio.h>
#include<string.h>
int main(){
	char password[10];
  
   int n;
  printf("ENTER THE PASSWORD : ");
  scanf("%s",&password);
  n=strlen(password);
  if(n>=8){
  	printf("\nVALID PASSWORD  ");
  }
  else if(n<8){
  	printf("\n....PASSWORD MUST BE 8 CHARACTERS....");
  }
  return 0;

}

