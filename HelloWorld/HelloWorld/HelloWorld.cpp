#include <stdio.h>
int MaxValue(int sc[],int n) // �μ��� �迭�� �迭ũ��
{
	int temp = sc[0];
	for (int i= 1; i < n; i++)
	{
		if (sc[i] > temp)
		{
			temp = sc[i];
		}
	}
	return temp;
}
int main()
{
	int s[5] = { 1,2,3,4,5 };
	printf("result=%d\n",MaxValue(s, 5));
	printf("Hello World");
}