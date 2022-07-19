#include <stdio.h>
FILE *ptr;
main (){
	int num;
	float price;
	char name[20];
	float total;
	ptr = fopen("data.txt","r");
	while (feof(ptr)==0){
		fscanf(ptr,"%d",&num); 
		fscanf(ptr,"-%f",&price);
		fscanf(ptr,"-%s",&name);
		total = num*price;
		printf ("Name = %s\tNumber = %d\tPrice = %.2f\t Total = %.2f\n",name,num,price,total);
	}
	fclose(ptr);
}