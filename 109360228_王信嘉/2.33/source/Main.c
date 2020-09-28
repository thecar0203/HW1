#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float a, b, c,d,e,s;
	printf("一整天的總里程數:\n");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢:\n");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里:\n");
	scanf_s("%f", &c);
	printf("一天的停車費:\n");
	scanf_s("%f", &d);
	printf("一天的通行費:\n");
	scanf_s("%f", &e);
	s = a / c * b + d + e;
	printf("使用者一天下來開車去工作的花費:%f \n",s);
	system("pause");
	return 0;
}