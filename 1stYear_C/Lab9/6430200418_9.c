#include <stdio.h>
float max_elec(float a[]);
float max_water(float b[]);
main(){
	int m_elec;
	int m_water;
	typedef struct {
		int electric;
		int water;
	}cost_room;
	cost_room room[3];
	
	for (int i=0;i<3;i++){
		printf("Room number %d\n",i+1);
		printf("Enter number of electric: ");
		scanf("%d",&room[i].electric);
		printf("Enter number of water: ");
		scanf("%d",&room[i].water);
		printf("Added !\n");
	}
	float high_elec[3];
	float high_water[3];
	for(int i=0;i<3;i++){
		float cost_watse = 100;
		float cost_service = 150;
		float cost_elec = 0;
		float cost_water = 0;
		printf("Room number %d\n",i+1);
		cost_elec = room[i].electric*15;
		printf("Number of Electric = %d. Cost of Electric = %.2f\n",room[i].electric,cost_elec);
		cost_water = room[i].water*30;
		printf("Number of Water = %d. Cost of Water = %.2f\n",room[i].water,cost_water);
		printf("Cost of waste = %.2f\n",cost_watse);
		printf("Cost of service = %.2f\n",cost_service);
		float cost_room = cost_elec+cost_water+cost_watse+cost_service;
		printf("Cost of Room %d = %.2f\n",i+1,cost_room);
		printf("************************\n");
		high_elec[i] = cost_elec;
		high_water[i] = cost_water;
		cost_room = 0;
	}
	m_elec = max_elec(high_elec);
	printf("High electric is Room number %d\n",m_elec+1);
	m_water = max_water(high_water);
	printf("High water is Room number %d",m_water+1);
}

float max_elec(float a[]){
	int max = a[0];
	int maxpos = 0;
	for(int i=0;i<3;i++){
		if(a[i]>max){
			max = a[i];
			maxpos = i;
		}
	}
	return maxpos;
}

float max_water(float b[]){
	int max = b[0];
	int maxpos = 0;
	for(int i=0;i<3;i++){
		if(b[i]>max){
			max = b[i];
			maxpos = i;
		}
	}
	return maxpos;
}