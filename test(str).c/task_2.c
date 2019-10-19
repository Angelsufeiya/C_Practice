#include <stdio.h>
#include <assert.h>

//Ä£ÄâÊµÏÖstrstr

char *my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char *cp = (char*)str1;
	char *substr = (char *)str2;
	char *s1 = NULL;
	if (*str2 == '\0')
		return NULL;
	while (*cp) {
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}

int main(){
	char arr1[] = "abcdefg";
	char arr2[20] = "ABCD";

	printf("%s", my_strstr(arr2, arr1));
	return 0;
}