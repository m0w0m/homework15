#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b;
	printf("請輸入幾點幾分:");
	scanf("%d %d", &a, &b);
	
	if (a > 7&&a<17)
	{
		printf("上學時間");
	}
	else if (a == 7&&b>=30)
	{
		printf("上學時間");
	}
	else if (a >=24 && b >= 60)
	{
		printf("輸入時間錯誤");
	}
	else
		printf("放學時間");

	system("pause");
	return 0;
}