#include <stdio.h>
main(){
    int *pt_data;
    int data[5] = {0,0,0,0,0};
    for(int i=1;i<=5;i++){
        printf("Inser Number %d : ",i);
        scanf("%d",&data[i-1]);
    }
    printf("----- Result -----\n");
    for (int i=5;i>=1;i--){
        pt_data = &data[i-1];
        printf("position %d => address: %p abd value is: %d\n",i,pt_data,*pt_data);
    }
}