#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float Power(int n, int k)
{
	if (k > 0)
	{//ÿ����k-1,ֱ��k����0����1����n���,�������õ����
		return n * Power(n, k - 1);
	}
	else if (k == 0)
	{//kΪ1ʱ����1
		return 1.0;
	}
	else
	{//�Ѹ��η�ת��Ϊ����,�õ�һ�����ʽ��������1.0����õ���
		return (1.0 / Power(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;//kΪ�η�
	scanf("%d,%d", &n, &k);
	printf("%lf",Power(n, k));
	return 0;
}