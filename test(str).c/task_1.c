#include <stdio.h>
#include <assert.h>
//ģ��ʵ��strcpy
char *my_strcpy(char *dest, const char *src){
	int i = 0;
	assert(dest != NULL);
	assert(src != NULL);

	while (src[i]){
		dest[i] = src[i];
		i++;
	}
	return dest;

	//char *ret = dest;
	//assert(dest != NULL);
	//assert(src != NULL);

	////char arr3 = { 0 };
	////assert(arr3 != NULL);
	////Ĭ������£�assert ��ֻ���� Debug �汾���ڲ����԰汾���в��ܹ�������
	////���� Release �汾�����а汾���н�������

	//while ((*dest++ = *src++))
	//{
	//	;
	//}
	//return ret;
}

char * my_strcat(char * dest, const char * src){
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest){
		dest++;
	}
	while ((*dest++ = *src++)){
		;
	}
	return ret;
}

int main(){
	char arr1[] = "abcdefg";
	char arr2[20]= "ABCD";

	//my_strcpy(arr2, arr1);
	//printf("%s\n", arr2);
	my_strcat(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}