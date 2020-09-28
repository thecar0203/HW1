#include<stdio.h>
#include<stdlib.h>


int main(void){
	int a,b;
	printf("Enter one integer:");
	scanf_s("%d",&a);
	b = a % 2; 
	if (b == 0) {
		printf("%d is a Even.",a);
	}
	if (b != 0) {
		printf("%d is a Odd.",a);
	}
	system("pause");
	return 0;
}

