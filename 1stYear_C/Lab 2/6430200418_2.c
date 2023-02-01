#include<stdio.h>

int fah_tem ; 
float cel_tem;

main()
{
	printf("Enter temperature in Fahrenheit : ");
	scanf("%d",&fah_tem);
	cel_tem  = (fah_tem-32)/1.8 ;
	printf("%d Fahrenheit = %.2f Celsius",fah_tem,cel_tem);
}
