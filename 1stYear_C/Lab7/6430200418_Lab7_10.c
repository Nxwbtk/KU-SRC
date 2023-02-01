#include <stdio.h>
main(){
    int *pt_data[10];
    int data[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i=1;i<11;i++){
        printf("Inser Number %d : ",i);
        scanf("%d",&data[i]);
    }
    printf("----- Result -----\n");
    for (int i=10;i>=1;i-=2){
            pt_data[i] = &data[i];
            printf("position %d => address: %p abd value is: %d\n",i,pt_data[i],*pt_data[i]);
    }
}