#include<stdio.h>
char std_id[10];
char std_name[30];
char major[20];
int age;
float gpa;
main()
{
	printf("Enter your id : ");
	scanf("%s",&std_id);
	printf("Enter your name and last name : ");
	scanf("%s",&std_name);
	printf("Enter your major : ");
	scanf("%s",&major);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your gpa : ");
	scanf("%f",&gpa);
	
	
	printf("My name is %s and student id is %s.\n",std_name,std_id);
	printf("I am %d year old and study %s.\n",age,major);
	printf("My GPA is %.2f.\n",gpa);
}
