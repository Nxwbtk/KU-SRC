#include <stdio.h>
int number,i,half,result;

int IsPrime(int num);

main(){
	printf("Enter number : ");
	scanf("%d",&number);
	result = IsPrime(number);
	for (i=2;i<=result;i++){
		if(number%i==0){
			printf("%d is not Prime Number.\n",number);
			break;		
		}
		else if(number%i!=0) {
		printf("%d is Prime Number.",number);
		break;
	}
	
}
}
int IsPrime (int num){
	half = num/2;
	return half;
	}
