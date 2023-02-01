#include<stdio.h>
float volume,commission;

main(){
	printf("Please enter volume : ");
	scanf("%f",&volume);
	if(volume>70000){
		commission = (volume*7)/100;
		printf("commission is %.2f baht\n",commission);
		printf("Good Performance");
	}
	else if(volume<=70000){
		commission = (volume*3)/100;
		printf("commission is %.2f baht\n",commission);
		printf("Low Performance");
	}
}

