#include<stdio.h>

main()

{

    int data[5] = {10,20,30,40,50};

    int *pt_data;

    pt_data = &data[0];
    printf("First Element is at address: %p, value is: %d\n", pt_data, *pt_data);
    pt_data++;
    printf("Now pointer is point to address: %p, value is: %d\n", pt_data, *pt_data);
	pt_data++;
	printf("Now pointer is point to address: %p, value is: %d\n", pt_data, *pt_data);
	pt_data--;
    printf("Now pointer is point to address: %p, value is: %d\n", pt_data, *pt_data);
	pt_data+=2;
	printf("Now pointer is point to address: %p, value is: %d\n", pt_data, *pt_data);
	pt_data-=3;
	printf("Now pointer is point to address: %p, value is: %d\n", pt_data, *pt_data);
}