#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float a, b, c,d,e,s;
	printf("�@��Ѫ��`���{��:\n");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�:\n");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���:\n");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:\n");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O:\n");
	scanf_s("%f", &e);
	s = a / c * b + d + e;
	printf("�ϥΪ̤@�ѤU�Ӷ}���h�u�@����O:%f \n",s);
	system("pause");
	return 0;
}