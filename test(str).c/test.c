#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ�����(������ '\0' )
//int main() {
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)//strlen(str2) - strlen(str1)	4294967293	unsigned int
//
//
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//char* strcpy(char * destination, const char * source);
//Դ�ַ��������� '\0' ������
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����

//char * strcat(char * destination, const char * source);
//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�

//int strcmp(const char * str1, const char * str2);
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������ 
//��һ���ַ������ڵڶ����ַ������򷵻�0 
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

//char * strncpy ( char * destination, const char * source, size_t num );
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����

//char * strncat ( char * destination, const char * source, size_t num );
//int main() {
//	char str1[20];
//	char str2[20];
//
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

//int strncmp ( const char * str1, const char * str2, size_t num )�Ƚ�
//int main() {
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++){
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	}
//	return 0;
//}

//char * strstr ( const char *, const char * );
//Returns a pointer to the first occurrence of str2 in str1
// or a null pointer if str2 is not part of str1.

//int main() {
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(pch);
//	return 0;
//}

//char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//(ע:strtok������ �ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ģ� 
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣

//int main() {
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//
//		pch = strtok(str, " ,.-");
//		while (pch != NULL)
//		{
//			printf("%s\n", pch);
//			pch = strtok(NULL, " ,.-");
//		}
//	return 0;
//}

//int main() {
//	char *p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30] = { 0 };
//	char *str = NULL;
//	strcpy(arr, p);
//	//�����ݿ���һ�ݣ�����arr��������� 
//	for(str=strtok(arr, sep);str != NULL; str=strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}

//void * memcpy ( void * destination, const void * source, size_t num );
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ����ġ�

//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//
//int main() {
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}

//void * memmove(void * destination, const void * source, size_t num);
//��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
//���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������

//int main() {
//	char str[] = "memmove can be very useful......";
//	memmove(str + 3, str + 5, 5);
//	puts(str);
//	return 0;
//}

//int memcmy(const void * ptr1, const void * ptr2, size_t num)
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�

//int main() {
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//
//	if (n > 0) {
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	}
//	else if (n < 0) {
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	}
//	else {
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	}
//	return 0;
//}