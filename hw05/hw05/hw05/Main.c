#include<stdio.h>
#include<stdlib.h>



int main(void) {
	int a1, a2;
	scanf("%d %d", &a1, &a2);
	if (a1%a2==0) 
	{
		printf("first is a multiple of the second");
	}
	else
	{
		printf("first isn't a multiple of the second");
	}
}