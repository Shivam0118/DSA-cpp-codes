/*DECLARE A STRUCTURE  FOR A STUDENT RECORD CONSISTING OF FOUR FIELDS.1 STUDENT ID,2 FIRST NAME,3 LAST NAME,4 TOTAL SCORE.WRITE A PROGRAM TO ACCEPT THE ALL DATA 
MEMBERS FROM THE USER.CLACULATE THE PERCENTGE OF STUDENT ASSUMING THAT TOATL SCORE CAN HAVE MAXIMUM 500.
DISPLAY THE DETAIL OF STUDENT ALONG WITH PERCENTAGE ON SCREEN.
*/
#include<stdio.h>
	struct student{
	  char student_id[20];
	  char first_name[20];
	  char last_name[20];
      float score;
	
	};
	int main(){
	struct student s1;
	float percentage;

	 printf("ENTER THE STUDENT ID :  ");
	 scanf("%s",&s1.student_id);
	 printf("ENTER THE FIRST NAME OF STUDENT : ");
	 scanf("%s",s1.first_name);
	 printf("ENTER THE LAST NAME OF STUDENT : ");
	 scanf("%s",&s1.last_name);
	 printf("ENTER THE STUDENT SCORE : ");
	 scanf("%f",&s1.score);
	percentage=s1.score/550*100;
	printf("PERCENTAGE OF STUDENT IS :  %f ",percentage); 
	 return 0;
}
