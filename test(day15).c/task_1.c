//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水。

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(){
	int money, value, n;
	int cover = 0, sum = 0;

	printf("请输入您拥有多少钱,一瓶汽水多少元和多少个空瓶能换一瓶汽水：");
	scanf("%d%d%d", &money, &value, &n);
	cover = money / value;//最开始购买的汽水量
	sum = cover;//统计喝汽水的瓶数
	
	while (cover >= n) {
		sum += cover / n;//统计喝汽水的瓶数
		cover = cover / n + cover % n;//空瓶数量
	}

	if (cover == n - 1){
		printf("如果不可以赊账，能喝%d瓶\n", sum);
		printf("如果可以赊账，则能喝%d瓶\n", sum + 1);
	}
	else{
		printf("无论能不能赊账，只能喝%d瓶\n", sum);
	}

	system("pause");
	return 0;
}