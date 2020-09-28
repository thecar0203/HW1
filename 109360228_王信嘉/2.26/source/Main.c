#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int a, b,c;
	printf("Enter two integers:");
	scanf_s("%d%d", &a,&b);
	if (a % b == 0) {
		printf("%d is a multiple of %d.", a,b);
	}
	if (a % b != 0) {
		printf("%d is not a multiple of %d.", a,b);
	}
	system("pause");
	return 0;
}