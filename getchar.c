/*  FUNCTIONS               USED FOR                  DATATYPES IT WORKS WITH
   
   getchar()                input                         char
   getc()                   input                          char
   gets()                   input                         char
   putchar()                output                        char
   puts()                   output                       char
   putc()                   output                        char
    
	UNFORMATTED FUNCTIONS---> iit cannot format data and it works with only character data type.
	e.g--->  var=getchar();          |          putchar(var)       |  var=getc(stdlin);or getc(var);             |putc(var,stdout);
	char value;                      |          char value;        |  char value;                                |char value;
	value=getchar();                 |          putchar(var);      |   value=getc(stdlin) or getc(value)         |putc(value,stdout);

#include<stdio.h>
int main(){
	char value;
	value=getchar();
	putchar(value);
	
}

#include<stdio.h>
int main(){
	char value;
	value=getc(stdin);
	printf("character=");
	putc(value,stdout);
	
	return 0;
}
gets(identifier name);  |puts(identifier name);  |
char city[20];          |char value;             |
gets(city);             |puts(value);            |
*/		
#include<stdio.h>
int main(){
	char city[20];
	gets(city);
	printf("city=");
	puts(city);
}

	
	
	
	
	
	
	
	
	
	
