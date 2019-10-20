#include <stdio.h>
#include <assert.h>

//模拟实现strstr

char *my_strstr(const char* str1, const char* str2)
{
	//检测str1;str2是否为空指针
	assert(str1);
	assert(str2);

	char *cp = (char*)str1;
	char *substr = (char *)str2;
	char *s1 = NULL;

	if (*str2 == '\0')
		return NULL;
	while (*cp) {
		s1 = cp;
		substr = (char *)str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
	return NULL;
}

int main2(){
	char arr1[] = "abcbcdef";
	char arr2[20] = "bcde";

	printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}