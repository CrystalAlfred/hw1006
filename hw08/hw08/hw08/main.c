#include<stdio.h>
#include<stdlib.h>



int main(void) {
	int weigh, high;
	scanf("%d %d", &weigh, &high);
	printf("BMI %f\n", weigh / (high / 100.0) / (high / 100.0));
	printf("Underweight: less then 18.5\n");
	printf("Narmal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
}