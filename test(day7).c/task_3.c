#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

int digitSum(int n){
	if (n == 0){
		return 0;
	}
	return n % 10 + digitSum(n / 10);
}

int main(){
	int n;

	scanf("%d", &n);
	printf("%d", digitSum(n));

	system("pause");
	return 0;
}