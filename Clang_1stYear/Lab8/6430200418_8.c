#include <stdio.h>
#include <string.h>

main(){
	char str1[20];
	char str2[20];
	printf("Enter a string 1: ");
	scanf("%s",&str1);
	printf("Enter a string 2: ");
	scanf("%s",&str2);
	strcat(str1,str2);
	printf("All string = %s\n\n",str1);
	char find[1];
	int count = 0;
	
	printf("*****************************\n");
	printf("Find a character : ");
	scanf("%s", &find);
	for (int i=0;i < strlen(str1); i++) {
		if (str1[i] == find[0])
		{
			count++;
		}
	}
	printf("Number of %s = %d",find,count);
}