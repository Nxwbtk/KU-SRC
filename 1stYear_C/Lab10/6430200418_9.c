#include <stdio.h>
FILE *fptpd;
FILE *fptpr;
main() {
	char product[20];
	float price;
	fptpd = fopen("product.txt","w");
	fptpr = fopen("price.txt","w");
	for (int i=0;i<3;i++){
	printf("Please input product name: ");
	scanf("%s",&product);
	printf("Please input product price: ");
	scanf("%f",&price);
	printf("\n*****\n");
	fprintf(fptpd,"%s\n",product);
	fprintf(fptpr,"%.2f\n",price);
	}
	fclose(fptpd);
	fclose(fptpr);
}
