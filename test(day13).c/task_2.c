//��һ����ά����.(���Ͼ���)
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�

#include<stdio.h>
#include<stdlib.h>

int findNum(int a[3][3], int x, int y, int f){
	int i = 0, j = y - 1;
	while (j >= 0 && i < x){
		if (a[i][j] < f){
			i++;
		}
		else if(a[i][j] > f){
			j--;
		}
		else{
			return 1;
		}
	}
	return 0;
}

int main(){
	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };

	if (findNum(a, 3, 3, 7)){
		printf("It has been found!\n");
	}
	else{
		printf("It hasn't been found!\n");
	}

	system("pause");
	return 0;
}