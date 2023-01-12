/* 1.WRITE A PROGRAM TO A\FIND A LENGTH OF STRING WITHOUT USING STRLEN FUNCTION OR RECURSION.
2. WRITE A PROGRAM TO PRINT REVERSE A STRING IN C USING STRREV FUNCTION.
3. WRITE A PROGRAM TTO CHECK A STRING IS PALINDROME OR NOT 
E.G --> XYZYX-XYZYX <- PALINDROME.
   HELLO<-OLLEH
*/
#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main(){
	char name[20];
	int l;
	int i;
	
	printf("ENTER THE STRING : ");
	scanf("%s",&name);
	l=strlen(name);
	 for(i=0;i<l/2;i++){
	 	if(name[i]!=name[l-1-i]){
	 		printf(" string is not palindrom");
	 		break;
		 }
	
	}	 if(i==l/2)
		 	printf("string is palindrome ");
	return 0;
}
