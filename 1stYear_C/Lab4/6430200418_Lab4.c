/*
#include <stdio.h>

main() 
{
	int i, j, row;

    printf("Please input the number of row : ");
    scanf("%d", &row);

    for(i = 0; i < row;i++) {
    	for(j = 0; j < row;j++) {
    		if(i == j) {
    			printf("0\t");
    		} else {
    			printf("1\t");
    		}
    	}
    	printf("\n");
    }
}
*/
#include <stdio.h>

main() 
{
	int i, j, row;

    printf("Please input the number of row : ");
    scanf("%d", &row);

    for(i = 1; i <= row;i++) {
    	for(j = 1; j <= row;j++) {
    		if(i == j) {
    			printf("0");
    		} else {
    			printf("1");
    		}
    	}
    	printf("\n");
    }
}
