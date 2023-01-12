/* WRITE A PROGRAM TO READ A FILE AND DISPALY ITS CONTENT ON THE SCREEN . EACH LINE SHOULD BE PRECEDED BY LINE NUMBER*/
#include<stdio.h>
int main(){
	File *fp;
	fp=fopen("myfile.txt","w");
	fprintf(fp,"HELLO WELOME TO C");
	fclose(fp);
}
