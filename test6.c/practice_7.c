#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��n�Ľ׳�

//�ݹ麯��
//int fac(int n){
//	if (n >= 2){
//		return n*fac(n - 1);
//	}
//	else{
//		return n;
//	}
//}

//�ǵݹ麯��
int fac(int n){
	int result = 1;
	while (n > 1){
		result *= n;
		n -= 1;
	}
	return result;
}

int main(){
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);

	system("pause");
	return 0;
}