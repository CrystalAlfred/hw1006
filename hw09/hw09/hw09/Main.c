#include<stdio.h>
#include<stdlib.h>



int main(void) {
	int miles,costgas,parkingfee,toll;
	float milesgallon;
	printf("Total mile driven per day");
	scanf("%d", &miles);
	printf("cost per gallon of gasoline");
	scanf("%d", &costgas);
	printf("Average miles per gallon");
	scanf("%f", &milesgallon);
	printf("Parking fees per day");
	scanf("%d", &parkingfee);
	printf("Tolls per day");
	scanf("%d", &toll);
	printf("total per day:%f",((miles/ milesgallon)*costgas+parkingfee+toll) );
}