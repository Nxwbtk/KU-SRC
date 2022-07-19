#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fpt;
FILE *fmn;
FILE *dis;
FILE *UDis;
int adddiscount(char a[],float b);
char Alluser(char u[],char u1[]);
char Allpass(char p[],char p1[]);
int diccmp(char c[],char d[]);
main () {
	char *ice[5]={"Vanilla","Chocolate","Chocolate chip","Strawberry","Green tea"};
	char *topping[5]={"Strawberry","Chocolate","Mango","Green tea","Two tone"};
	int price_top[5]={30,30,46,69,69};
	int Hn_top[5]={5,5,7,6,10};
	int price = {60};
	float select;
	int price_list;
	static float total_price;
	int Bingsu ;
	int water;
	int Blue_Hawai;
	int Lemon_soda;
	int Coco;
	int Honey_Toast;
	loop1:
	Bingsu = 0;
	water = 0;
	Blue_Hawai = 0;
	Lemon_soda = 0;
	Coco = 0;
	Honey_Toast = 0;
	total_price = 0;
	printf("\t\t===================================\n");
	printf("\t\t||\t\t\t\t ||\n");
	printf("\t\t||          Select Menu          ||\n");
	printf("\t\t||         1.Order foods         ||\n");
	printf("\t\t||         2.Admin system        ||\n");
	printf("\t\t||         3.Exit Menu           ||\n");
	printf("\t\t||\t\t\t\t ||\n");
	printf("\t\t===================================\n\n");
	while (1==1){
		printf("Enter Menu : ");
		scanf("%f",&select);
		system("cls");
	loop2:
		if(select==1){
			printf("\t\t===================================================\n");
			printf("\t\t||\t\t\t\t\t\t ||\n");
			fmn = fopen("fmenu.txt","r+");
			char name[20];
			int size_s,size_m,size_l;
			int i=1;
			char name_h[20];
			int h_size_s,h_size_m,h_size_l;
			char name_w[20];
			int w_size_s,w_size_m,w_size_l;
			char name_b[20];
			int b_size_s,b_size_m,b_size_l;
			char name_l[20];
			int l_size_s,l_size_m,l_size_l;
			char name_c[20];
			int c_size_s,c_size_m,c_size_l;
			printf("\t\t||        Food\t\t  S\t  M\t  L\t ||\n");
			while (feof(fmn)==0){
				fscanf(fmn,"%d",&size_s);
				fscanf(fmn,"-%d",&size_m);
				fscanf(fmn,"-%d",&size_l);
				fscanf(fmn,"-%[^\n]",&name);
				printf("\t\t||        %d.%s\t %d\t %d\t %d\t ||\n",i,name,size_s,size_m,size_l);
				i++;
			}
			printf("\t\t||        0.Back to main menu\t   \t   \t ||\n");
			printf("\t\t||\t\t\t\t\t\t ||\n");
			printf("\t\t===================================================\n\n");
			while (1!=0){
				int menu;
				printf("Enter your food menu : ");
				scanf("%d",&menu);
				if (menu==0){
					Bingsu = 0;
					water = 0;
					Blue_Hawai = 0;
					Lemon_soda = 0;
					Coco = 0;
					Honey_Toast = 0;
					total_price = 0;
					int price_discount, net_price = 0;
					system("cls");
					goto loop1;
				    }
				else if(menu==1){
					Bsize:
					system("cls");
					printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||         Bingsu                     ||\n");
                    printf("\t\t||         Select size      Price     ||\n");
                    fmn = fopen("fmenu.txt","r+");
				    fscanf(fmn,"%d-%d-%d-[^\n]",&size_s,&size_m,&size_l,&name);
                    printf("\t\t||         1.S              %d B      ||\n",size_s);
                    printf("\t\t||         2.M             %d B      ||\n",size_m);
                    printf("\t\t||         3.L             %d B      ||\n",size_l);
                    
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t========================================\n\n");
                    while (1!=0){
				        int size;
			            printf("Enter your size : ");
				        scanf("%d",&size);
				        system("cls");
				        if(size==1){
						    Bingsu+=75;
						}
						else if(size==2){
							Bingsu +=120;
						}
						else if(size==3){
							Bingsu += 170;
						}
						else {
							goto Bsize;
						}
						
						char name_t[20];
			            int price;
			            int i;
			            Btop:
			            i=1;
			            system("cls");
			            printf("\t\t===================================================\n");
			            printf("\t\t||\t\t\t\t\t\t ||\n");
			            printf("\t\t||        Topping\t\t\tPrice\t ||\n");
			            for(i=0;i<5;i++){
				        	printf("\t\t||        %d.%s\t\t\t %d B\t ||\n",i+1,topping[i],price_top[i]);
						}
			                printf("\t\t||\t\t\t\t\t\t ||\n");
			                printf("\t\t===================================================\n\n");
				            int topp;
				            printf("Enter your topping : ");
				            scanf("%d",&topp);
				            if (topp==1){
				            	Bingsu += price_top[0];
				            	goto AnyOrder;
							}
							else if (topp==2){
								Bingsu += price_top[1];
								goto AnyOrder;
							}
							else if (topp==3){
								Bingsu += price_top[2];
								goto AnyOrder;
							}
							else if (topp==4){
								Bingsu += price_top[3];
								goto AnyOrder;
							}
							else if (topp==5){
								Bingsu += price_top[4];
								goto AnyOrder;
							}
							else {
								goto Btop;
							}
						}
						int yn;
						AnyOrder:
						system("cls");
				        printf("\t\t===================================================\n");
                        printf("\t\t||\t\t\t\t\t\t ||\n");
                        printf("\t\t||         Would you like any order?             ||\n");
                        printf("\t\t||         1.Yes                                 ||\n");
                        printf("\t\t||         2.No                                  ||\n");
                        printf("\t\t||         0.Back to main menu\t   \t   \t ||\n");
                        printf("\t\t||\t\t\t\t\t\t ||\n");
                        printf("\t\t===================================================\n\n");
                        printf("Enter Yes/No : ");
				        scanf("%d",&yn);
				        system("cls");
				        if(yn==1){
				        	goto loop2;
						}
						else if(yn==2){
							loop4:
							UDis = fopen("discount.txt", "r");
							// varible
							float net_price, price_discount;
							char input_discount[20],
								 discount1[20],
								 discount2[20],
								 discount3[20],
								 discount4[20],
								 discount5[20],
								 discount6[20],
								 discount7[20],
								 discount8[20],
								 discount9[20],
								 discount10[20],
								 discount11[20],
								 discount12[20]
								 ;
							int verify_code1,
								verify_code2,
								verify_code3,
								verify_code4,
								verify_code5,
								verify_code6,
								discount_int1,
								discount_int2,
								discount_int3,
								discount_int4,
								discount_int5,
								discount_int6
								;
							// input code discount
							printf("[Server] Please enter your code discount if not have press any : ");
							scanf("%s", input_discount);
							// read code discount in list file "discount.txt"
								// code discount 1
							fscanf(UDis, "%s", discount1);
							fscanf(UDis, "%s", discount2);
							discount_int1 = atoi(discount2);
								// code discount 2
							fscanf(UDis, "%s", discount3);
							fscanf(UDis, "%s", discount4);
							discount_int2 = atoi(discount4);
								// code discount 3
							fscanf(UDis, "%s", discount5);
							fscanf(UDis, "%s", discount6);
							discount_int3 = atoi(discount6);
								// code discount 4
							fscanf(UDis, "%s", discount7);
							fscanf(UDis, "%s", discount8);
							discount_int4 = atoi(discount8);
								// code discount 5
							fscanf(UDis, "%s", discount9);
							fscanf(UDis, "%s", discount10);
							discount_int5 = atoi(discount10);
								// code discount 6
							fscanf(UDis, "%s", discount11);
							fscanf(UDis, "%s", discount12);
							discount_int6 = atoi(discount12);
							// sum total price and check code discount
							total_price = Bingsu+Honey_Toast+water+Blue_Hawai+Lemon_soda+Coco;
							// check code discount
							verify_code1 = strcmp(input_discount, discount1);
							verify_code2 = strcmp(input_discount, discount3);
							verify_code3 = strcmp(input_discount, discount5);
							verify_code4 = strcmp(input_discount, discount7);
							verify_code5 = strcmp(input_discount, discount9);
							verify_code6 = strcmp(input_discount, discount11);
							
							if(verify_code1 == 0) {
								price_discount = total_price * discount_int1 / 100;
								net_price = total_price - price_discount;
							} else if(verify_code2 == 0) {
								price_discount = total_price * discount_int2 / 100;
								net_price = total_price - price_discount;
							} else if(verify_code3 == 0) {
								price_discount = total_price * discount_int3 / 100;
								net_price = total_price - price_discount;
							} else if(verify_code4 == 0) {
								price_discount = total_price * discount_int4 / 100;
								net_price = total_price - price_discount;
							} else if(verify_code5 == 0) {
								price_discount = total_price * discount_int5 / 100;
								net_price = total_price - price_discount;
							} else if(verify_code6 == 0) {
								price_discount = total_price * discount_int6 / 100;
								net_price = total_price - price_discount;
							} else {
								price_discount = 0.00;
								net_price = total_price;
							}
							typedef struct{
								char name[20];
								char lname[20];
							}cname;
							typedef struct{
								char sname[20];
								char slname[20];
							}seller;
							cname cusn;
							printf("Enter customer name : ");
							scanf("%s",&cusn.name);
							printf("Enter your last name : ");
							scanf("%s",&cusn.lname);
							seller sinfo;
							printf("Enter seller name : ");
							scanf("%s",&sinfo.sname);
							printf("Enter seller last name : ");
							scanf("%s",&sinfo.slname);
							system("cls");
							printf("\t\t============================================================\n");
							printf("\t\t\t\t\t\t\t\t\n");
							printf("\t\t\t	Customer : %s %s \n\n",cusn.name,cusn.lname);
							printf("\t\t------------------------------------------------------------\n\n");
							printf("\t\t\t\t     Receipt\t\t\t\n");
							if (Bingsu > 0) {
								printf("\t\t\t	Bingsu      : %d Baht\n",Bingsu);
							}
							if (Honey_Toast > 0) {
								printf("\t\t\t	Honey Toast : %d Baht\n",Honey_Toast);
							}
							if (water > 0) {
								printf("\t\t\t	Water       : %d  Baht\n",water);
							}
							if (Blue_Hawai > 0) {
								printf("\t\t\t	Blue Hawai  : %d  Baht\n",Blue_Hawai);
							}
							if (Lemon_soda > 0) {
								printf("\t\t\t	Lemon soda  : %d  Baht\n",Lemon_soda);
							}
							if (Coco > 0) {
								printf("\t\t\t	Coco        : %d  Baht\n",Coco);
							}
							printf("\t\t\t\t\t\t\t\t\n");
							printf("\t\t------------------------------------------------------------\n");
							printf("\t\t\t\t\t\t\t\t\n");
							if (!price_discount == 0.00) {
								printf("\t\t  \t	Price       : %.2f Baht \n",total_price);
							}
							printf("\t\t\t	Discount    : %.2f Baht \n",price_discount);
							printf("\t\t\t	Total Price : %.2f Baht \n\n",net_price);
							printf("\t\t------------------------------------------------------------\n\n");
							printf("\t\t\t	Seller : %s %s \n",sinfo.sname,sinfo.slname);
							printf("\t\t\t\t\t\t\t\t\n");
							printf("\t\t------------------------------------------------------------\n");
							printf("\t\t\t\t\t\t\t\t\n");
							printf("\t\t     	 Press any key for back to main menu...\n");
							char buy_done;
							printf("\n\t\t=============================================================\n");
							buy_done = getch();
							system("cls");
							goto loop1;
						}
							                                                                              
						else if(yn==0){
							goto loop1;
				        }
				        else{
				        	goto AnyOrder;
						}
			    }
			    else if(menu==2){
			    	Hnsize:
			    	system("cls");
				    printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||         Honey Toast                ||\n");
                    printf("\t\t||         Select size     Price      ||\n");
                    fmn = fopen("fmenu.txt","r+");
                    	fscanf(fmn,"%d-%d-%d-%[^\n]",&size_s,&size_m,&size_l,&name);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&h_size_s,&h_size_m,&h_size_l,&name_h);
                        printf("\t\t||         1.S             %d B      ||\n",h_size_s);
                        printf("\t\t||         2.M             %d B      ||\n",h_size_m);
                        printf("\t\t||         3.L             %d B      ||\n",h_size_l);
                        printf("\t\t||\t\t\t\t      ||\n");
                        printf("\t\t========================================\n\n");
                        while (1!=0){
				        int size;
			            printf("Enter your size : ");
				        scanf("%d",&size);
				        system("cls");
				        int j,favor;
				        Hntop:
				        if(size==1){
				        	Honey_Toast+=130;
				        	for(i=0;i<1;i++){
				        		printf("\t\t===================================================\n");
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t||       Favor Ice-cream\tPrice   \t ||\n");
			                    for(j=0;j<5;j++){
			                    	printf("\t\t||    %d. %s\t\t%d\t\t ||\n",j+1,ice[j],Hn_top[j]);
			                	}
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t===================================================\n");
			                	printf("Select your favor : ");
			                    scanf("%d",&favor);
			                    if (favor==1){
			                    	Honey_Toast+=Hn_top[0];
			                    	system("cls");
			                    	goto AnyOrder;
								}
			                    else if (favor==2){
			                    	Honey_Toast+=Hn_top[1];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==3){
			                    	Honey_Toast+=Hn_top[2];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==4){
			                    	Honey_Toast+=Hn_top[3];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==5){
			                    	Honey_Toast+=Hn_top[4];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else{
									system("cls");
									goto Hntop;
								}
							}
						}
						else if(size==2){
							Honey_Toast+=175;
							total_price+=175;
				        	for(i=0;i<2;i++){
				        		printf("\t\t===================================================\n");
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t||       Favor Ice-cream\tPrice   \t ||\n");
			                	for(j=0;j<5;j++){
			                		printf("\t\t||    %d. %s\t\t%d\t\t ||\n",j+1,ice[j],Hn_top[j]);
			                	}
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t===================================================\n");
			                	printf("Select your favor : ");
			                    scanf("%d",&favor);
			                    if (favor==1){
			                    	Honey_Toast+=Hn_top[0];
			                    	system("cls");
			                    	goto AnyOrder;
								}
			                    else if (favor==2){
			                    	Honey_Toast+=Hn_top[1];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==3){
			                    	Honey_Toast+=Hn_top[2];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==4){
			                    	Honey_Toast+=Hn_top[3];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==5){
			                    	Honey_Toast+=Hn_top[4];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else{
									system("cls");
									goto Hntop;
								}
							}
							
					    }
					    else if(size==3){
					    	Honey_Toast+=210;
					    	total_price+=210;
				        	for(i=0;i<3;i++){
				        		printf("\t\t===================================================\n");
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t||       Favor Ice-cream\tPrice   \t ||\n");
			                	for(j=0;j<5;j++){
			                		printf("\t\t||    %d. %s\t\t%d\t\t ||\n",j+1,ice[j],Hn_top[j]);
			                	}
			                	printf("\t\t||\t\t\t\t\t\t ||\n");
			                	printf("\t\t===================================================\n");
			                	printf("Selec your favor : ");
			                    scanf("%d",&favor);
			                    if (favor==1){
			                    	Honey_Toast+=Hn_top[0];
			                    	system("cls");
			                    	goto AnyOrder;
								}
			                    else if (favor==2){
			                    	Honey_Toast+=Hn_top[1];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==3){
			                    	Honey_Toast+=Hn_top[2];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==4){
			                    	Honey_Toast+=Hn_top[3];
			                    	system("cls");
			                    	goto AnyOrder;
								}
								else if (favor==5){
			                    	Honey_Toast+=Hn_top[4];
			                    	system("cls");
			                    	goto AnyOrder;
								}               
								else{
									system("cls");
									goto Hntop;
								}
							}
							
					    }
					    else {
					    	system("cls");
					    	goto Hnsize;
						}
			        }   
				}
				else if(menu==3){
					Swater:
					system("cls");
			    	char name_w[20];
			    	int w_size_s,w_size_m,w_size_l,i;
				    printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||         Water                      ||\n");
                    printf("\t\t||         Select size      Price     ||\n");
                    fmn = fopen("fmenu.txt","r+");
                    	fscanf(fmn,"%d-%d-%d-%[^\n]",&size_s,&size_m,&size_l,&name);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&h_size_s,&h_size_m,&h_size_l,&name_h);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&w_size_s,&w_size_m,&w_size_l,&name_w);
                    	printf("\t\t||         1.S [ 250 ML ]    %d B     ||\n",w_size_s);
                        printf("\t\t||         2.M [ 600 ML ]    %d B     ||\n",w_size_m);
                        printf("\t\t||         3.L [ 1500 ML ]   %d B     ||\n",w_size_l);
                    	printf("\t\t||\t\t\t\t      ||\n");
                        printf("\t\t========================================\n\n");
                        int size_water;
                        printf("Enter size : ");
                        scanf("%d",&size_water);
                        if (size_water==1){
                        	water+=12;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_water==2){
                        	water+=20;
                        	system("cls");
                        	goto AnyOrder;
						}
                        else if (size_water==3){
                        	water+=30;
                        	system("cls");
                        	goto AnyOrder;
						}
						else {
							goto Swater;
						}
				}
				else if(menu==4){
					
					system("cls");
			    	char name_b[20];
			    	int b_size_s,b_size_m,b_size_l,i;
			    	Bluesize:
			    	system("cls");
				    printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||         Blue Hawai                 ||\n");
                    printf("\t\t||         Select size      Price     ||\n");
                    fmn = fopen("fmenu.txt","r+");
                    	fscanf(fmn,"%d-%d-%d-%[^\n]",&size_s,&size_m,&size_l,&name);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&h_size_s,&h_size_m,&h_size_l,&name_h);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&w_size_s,&w_size_m,&w_size_l,&name_w);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&b_size_s,&b_size_m,&b_size_l,&name_b);
                    	printf("\t\t||         1.S [16 OZ.]     %d B      ||\n",b_size_s);
                        printf("\t\t||         2.M [22 OZ.]     %d B      ||\n",b_size_m);
                        printf("\t\t||         3.L [28 OZ.]     %d B      ||\n",b_size_l);
                    	printf("\t\t||\t\t\t\t      ||\n");
                        printf("\t\t========================================\n\n");
                        int size_blue;
                        printf("Enter size : ");
                        scanf("%d",&size_blue);
                        if (size_blue==1){
                        	Blue_Hawai+=30;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_blue==2){
                        	Blue_Hawai+=40;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_blue==3){
                        	Blue_Hawai+=50;
                        	system("cls");
                        	goto AnyOrder;
						}
						else{
							goto Bluesize;
						}
           		}
				else if(menu==5){
					system("cls");
			    	char name_l[20];
			    	int l_size_s,l_size_m,l_size_l,i;
			    	Lmons:
				    printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||         Lemon soda                 ||\n");
                    printf("\t\t||         Select size      Price     ||\n");
                    fmn = fopen("fmenu.txt","r+");
                    	fscanf(fmn,"%d-%d-%d-%[^\n]",&size_s,&size_m,&size_l,&name);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&h_size_s,&h_size_m,&h_size_l,&name_h);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&w_size_s,&w_size_m,&w_size_l,&name_w);
						fscanf(fmn, "%d-%d-%d-%[^\n]",&b_size_s,&b_size_m,&b_size_l,&name_b);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&l_size_s,&l_size_m,&l_size_l,&name_l);
                    	printf("\t\t||         1.S [16 OZ.]     %d B      ||\n",l_size_s);
                        printf("\t\t||         2.M [22 OZ.]     %d B      ||\n",l_size_m);
                        printf("\t\t||         3.L [28 OZ.]     %d B      ||\n",l_size_l);
                    	printf("\t\t||\t\t\t\t      ||\n");
                        printf("\t\t========================================\n\n");
                        int size_lemon;
                        printf("Enter size : ");
                        scanf("%d",&size_lemon);
                        if (size_lemon==1){
                        	Lemon_soda+=30;
                        	system("cls");
                        	goto AnyOrder;
						}
                        else if (size_lemon==2){
                        	Lemon_soda+=40;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_lemon==3){
                        	Lemon_soda+=50;
                        	system("cls");
                        	goto AnyOrder;
						}
						else{
							system("cls");
							goto Lmons;
						}
           		}
           		else if(menu==6){
					system("cls");
			    	char name_c[20];
			    	int c_size_s,c_size_m,c_size_l,i;
			    	Cosize:
				    printf("\t\t========================================\n");
                    printf("\t\t||\t\t\t\t      ||\n");
                    printf("\t\t||       Coco                         ||\n");
                    printf("\t\t||       Select   size      Price     ||\n");
                    fmn = fopen("fmenu.txt","r+");
                    	fscanf(fmn,"%d-%d-%d-%[^\n]",&size_s,&size_m,&size_l,&name);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&h_size_s,&h_size_m,&h_size_l,&name_h);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&w_size_s,&w_size_m,&w_size_l,&name_w);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&b_size_s,&b_size_m,&b_size_l,&name_b);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&l_size_s,&l_size_m,&l_size_l,&name_l);
                    	fscanf(fmn, "%d-%d-%d-%[^\n]",&c_size_s,&c_size_m,&c_size_l,&name_c);
                    	printf("\t\t||       1.S      [16 OZ.]   %d B     ||\n",c_size_s);
						printf("\t\t||       2.M      [22 OZ.]   %d B     ||\n",c_size_m);
						printf("\t\t||       3.Frappe [22 OZ.]   %d B     ||\n",c_size_l);
                    	printf("\t\t||\t\t\t\t      ||\n");
                        printf("\t\t========================================\n\n");
                        int size_coco;
                        printf("Enter size : ");
                        scanf("%d",&size_coco);
                        if (size_coco==1){
                        	Coco+=25;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_coco==2){
                        	Coco+=35;
                        	system("cls");
                        	goto AnyOrder;
						}
						else if (size_coco==3){
                        	Coco+=45;
                        	system("cls");
                        	goto AnyOrder;
						}
						else {
							system("cls");
							goto Cosize;
						}
           		}
           		else {
           			system("cls");
           			goto loop2;
				   }
		    }
        }
		else if (select==2){
		printf("\t\t===================================\n");
		printf("\t\t||\t\t\t\t ||\n");
		printf("\t\t||         Admin System          ||\n");
		printf("\t\t||         Please Enter          ||\n");
		printf("\t\t||          1.Username           ||\n");
		printf("\t\t||          2.Password           ||\n");
		printf("\t\t||\t\t\t\t ||\n");
		printf("\t\t===================================\n\n");
		char user1[10],pass1[10];
		char user[10],pass[10];
		fpt = fopen("info.txt","r");
		printf("Username : ");
		scanf("%s",&user);
		printf("Password : ");
		scanf("%s",&pass);
		while (feof(fpt)==0){
			fscanf(fpt,"%s",user1);
			fscanf(fpt,"%s",pass1);
			int P,U;
			U = Alluser(user,user1);
			P = Allpass(pass,pass1);
			if (U==0&&P==0){
				adminmenu:
				system("cls");
				int adme;
				printf("\t\t===================================\n");
				printf("\t\t||\t\t\t\t ||\n");
				printf("\t\t||         Admin Menu	         ||\n");
				printf("\t\t||         Please Enter          ||\n");
				printf("\t\t||        1.Add Discount         ||\n");
				printf("\t\t||      2.Back to main menu      ||\n");
				printf("\t\t||\t\t\t\t ||\n");
				printf("\t\t===================================\n\n");
				printf("Enter your menu : ");
				scanf("%d",&adme);
				if (adme==1){
					char gback;
					float dis_num;
					char discount[10];
					system("cls");
					printf("Please add discount code : ");
					scanf("%s",&discount);
					printf("Please enter number of discount : ");
					scanf("%f",&dis_num);
					int result = adddiscount(discount,dis_num);
					if (result==1){
						dis = fopen("discount.txt","a");
						fprintf(dis,"\n%s %.2f",discount,dis_num);
						fclose(dis);
						printf("Add done\n");
						printf("Press any key for back to main menu...");
						gback = getch();
						goto adminmenu;
					}
					else{
						printf("already have this code!\n");
						printf("Press any key for back to main menu...");
						gback = getch();
						goto adminmenu;
					}
				
				}
				else if(adme==2){
					system("cls");
					goto loop1;
				}
				else {
					system("cls");
					goto adminmenu;
				}
			}
			else if (U!=0 && P!=0){
			printf("Wrong Username/Password Please try again!\n");
			printf("Press any key for back to main menu...");
			char emp;
			emp = getch();
			system("cls");
			goto loop1;
		}
		}
		fclose(fpt);
		system("cls");
		goto loop1;
		}
		else if (select==3){
		printf("\t\t===================================\n");
		printf("\t\t||\t\t\t\t ||\n");
		printf("\t\t||---------Exit Menu-------------||\n");
		printf("\t\t||         Thanks you	         ||\n");
		printf("\t\t||      See you next time        ||\n");
		printf("\t\t||\t\t\t\t ||\n");
		printf("\t\t===================================\n\n");
		break;
		}
		else {
			system("cls");
			goto loop1;
		}
	}
	fclose(fmn);
	fclose(UDis);
}

int adddiscount(char a[],float b){
	char dis1[10];
	float disn;
	dis = fopen("discount.txt","r");
	while (feof(dis)==0){
		fscanf(dis,"%s",&dis1);
		fscanf(dis,"%f",&disn);
		if(a!=dis1 && b!=disn){
			fclose(dis);
			return 1;
		}
		else if (a==dis1 && b==disn) {
			fclose(dis);
			return 0;
		}
	}
}
char Alluser(char u[],char u1[]){
	return strcmp(u,u1);
}
char Allpass(char p[],char p1[]){
	return strcmp(p,p1);
}
