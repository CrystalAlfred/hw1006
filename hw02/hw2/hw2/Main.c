#include<stdio.h>
#include<stdlib.h>




int main(void) {
	int a, b, c, largest, smallest;
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	{
		largest = a;
	}
	if (b > a && b > c)
	{
		largest = b;
	}
	if (c > b && c > a)
	{
		largest = c
			;
	}
	if (a < b && a < c)
	{
		smallest = a;
	}
	if (b < a && b < c)
	{
		smallest = b;
	}
	if (c < b && c < a)
	{
		smallest = c;
	}
	printf("the largest if %d\nthe smallest is %d", largest, smallest);
};