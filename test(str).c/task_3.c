#include <stdio.h>
#include <assert.h>

//ģ��ʵ�� memcpy
void * my_memcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	//���str1;str2�Ƿ�Ϊ��ָ��
	assert(dst);
	assert(src);
	
	//copy from lower addresses to higher addresses
	
	while (count--) {
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;//void���ͣ����� ++
		src = (char *)src + 1;//void���ͣ����� ++
	}
	return ret;
}

//ģ��ʵ�� memmove
void * my_memmove(void * dst, const void * src, size_t count){
	void * ret = dst;

	if (dst <= src || (char *)dst >= ((char *)src + count)) {
		//�����ص���copy from lower addresses to higher addresses
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else {
		//(�ص���copy from higher addresses to lower addresses
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return ret;
}

int main3(){
	char arr1[10] = "abcbcdef";
	char arr2[10] = "bcde";

	//printf("%s\n", my_memcpy(arr1+4, arr1, 3));
	printf("%s\n", my_memmove(arr1 + 4, arr1, 5));
	return 0;
}