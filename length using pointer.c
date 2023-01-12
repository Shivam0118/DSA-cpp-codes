/* write aprogram to find a length of string using pointer*/
#include<stdio.h>
#include<string.h>
int str_len(char*);

int main(){
	char s[20];
	int n;
	printf("ENTER THE STRING : ");
	scanf("%s",&s);
	n=str_len(s);
	printf("LENGTH OF THE STRING IS : %d",n);

}
int str_len(char*p){
	int count=0;
	while(*p!='\0'){  
	count++;
	p++;
}
  return count;
}
