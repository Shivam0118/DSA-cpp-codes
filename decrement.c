#include<stdio.h>
int main(){
	int a,b,choice;
	scanf("%d, %d",&a,&b);
//	do{ char[ch];
	
	printf("1.ADD\n2.SUBTRACT\n3.MULTIPLICATION\n4.DIVISION");
	printf("CHOOSE THE OPTION GIVEN ABOVE------>");
	scanf("%d",&choice)
	
	switch(choice){
		case1: printf("%d+%d=%d",a+b,a,b);
		break;
		case2: printf("%d-%d=%d",a-b,a,b);
		break;
		case3: printf("%d*%d=%d",a*b,a,b);
		break;
		case4: printf("%d/%d=%d",a/b,a,b);
		break;
		default: printf("WORNG OPTION CHOOSEN \a\n");
	}
	getchar();
	printf("DO YOU WANT TO CONTINUE-------\n");
	printf("IF YES PRESS Y ,OR PRESS NO");
	ch=getchar();
	printf("%d",ch);
}while(ch=='Y'||h=='y');
