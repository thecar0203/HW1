#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float h, w, b ;
	printf("Please enter your weight(kg):\n");
	scanf_s("%f", &w);
	printf("Please enter your height(m):\n");
	scanf_s("%f", &h);
	b = w/(h*h);
	printf("Your BMI value : %f \n",b);
	if (b < 18.5) {
		printf("Underweight\n");
	}
	if (b >= 18.5 & b < 25) {
		printf("Normal\n");
	}
	if (b >= 25 & b < 30) {
		printf("Overweight\n");
	}
	if (b >= 30) {
		printf("Obese\n");
	}
	system("pause");
	return 0;

}