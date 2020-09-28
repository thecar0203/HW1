#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int a, b, c, max, min;
    printf("Please enter three integers:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	if(b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	min = a;
	if (b < min ) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	printf("The largest integers is %d.\n",max);
	printf("The smallest integers is %d.",min);
	system("pause");
	return 0;

}