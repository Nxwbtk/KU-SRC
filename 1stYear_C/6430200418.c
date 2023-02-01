/*
#include <stdio.h>
float cel,fah;
float temp_convert(float temp);

main(){
	printf("Celsius : ");
	scanf("%f",&cel);
	temp_convert(cel);
	printf("Fahrenheit : %.2f",fah;
}

float temp_convert(float temp){
	fah = (1.8*temp)+32;
	return fah;
}
*/
/*
#include <stdio.h>
#include <math.h>
#define pi 3.1415
float radius,area,sum;
float cal(float ra);

main(){
	printf("Enter Radius : ");
	scanf("%f",&radius);
	sum = cal(radius);
	printf("%.2f",sum);
	
}
float cal(float ra){
	area = pi*(pow(ra,2));
	return area;
}
*/

#include <stdio.h>
int max = 0;
int min =9999;
int num;
int maxminnumber();
int printnum();
main(){
	int i;
	for (i=0;i<=4;i++){
		printf("Enter your number : ");
		scanf("%d",&num);
		maxminnumber(num);
	}
	printnum(num);
}
int maxminnumber(){
	if(num>max){
		max = num;
	}
	if (num<min){
		min=num;
	}
}
int printnum(){
	printf("max = %d\n",max);
	printf("min = %d",min);
}
