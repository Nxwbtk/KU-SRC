#include <stdio.h>

main(){
	int sum = 0,row = 5,colum = 3;
	float std_sum[5] = {0,0,0,0,0};
	float score[row][colum];
	float max_arr[3] = {0,0,0};
	float max = max_arr[0];
	int max_std[3] = {0,0,0};
	for (int i=1;i<=row;i++){
		for (int j=1;j<=colum;j++){
			printf("Enter score student : [%d] Times : [%d] = ",i,j);
			scanf("%f",&score[i][j]);
			std_sum[i] = std_sum[i] + score[i][j];
		}
	}
	for(int i =1;i<=5;i++){
		printf("Sum of student[%d] = %f\n",i,std_sum[i]);
	}
	for (int j=1;j<=3;j++){
		
		for(int i=1;i<=5;i++){
			if(score[i][j]>max_arr[j]){
				max_arr[j] = score[i][j];
				max_std[j]= i;
			}
		}
	}
	for (int j=1;j<=3;j++){
		printf("The max number of time[%d] is student[%d] = %.2f point\n",j,max_std[j],max_arr[j]);
	}
}