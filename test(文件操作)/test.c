#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ��� 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

/* fopen fclose example */
//int main() {
//	FILE * pFile;
//	pFile = fopen("myfile.txt", "w");
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		fclose(pFile);
//	}
//	return 0;
//}

//void main()
//{
//	FILE *fp;
//
//	int num = 10;
//	char name[10] = "Leeming";
//	char gender = 'M';
//
//	if ((fp = fopen("info.txt", "w+")) == NULL)
//		printf("can't open the file! \n");
//	else
//		fprintf(fp, "%d, %s, %c", num, name, gender); //�����ݸ�ʽ��������ļ�info.txt��
//
//	fscanf(fp, "%d, %s, %c", &num, name, &gender); //���ļ�info.txt�и�ʽ����ȡ����
//	printf("%d, %s, %c \n", num, name, gender); //��ʽ���������Ļ
//
//	fclose(fp);
//}

/* rewind example */
//int main() {
//	int n;
//	FILE * pFile;
//	char buffer[27];
//
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++){
//		fputc(n, pFile);
//	}
//	rewind(pFile);
//
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	buffer[26] = '\0';
//	puts(buffer);
//
//	return 0;
//}
//fread��fwrite������ʹ��


/* fseek example */
//
//int main() {
//	FILE * pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


/* ftell example : getting size of a file */
//int main() {
//	FILE * pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL) 
//		perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END);   // non-portable
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}

//#define SIZE 3
//
//typedef enum {
//	MM,
//	GG 
//} Gender;
//
//typedef struct
//{
//	char name[10];
//	int  age;
//	Gender gender;
//} Person;
//
//void write2file(Person emp[SIZE])
//{
//	FILE *fp;
//	if ((fp = fopen("emp.txt", "wb")) == NULL)
//	{
//		printf("cannot open file! \n");
//		return;
//	}
//
//	for (int i = 0; i < SIZE; i++){
//		if (fwrite(&emp[i], sizeof(Person), 1, fp) != 1)
//			printf("file write error! \n");
//	}
//	fclose(fp);
//}
//
//void read_from_file(FILE *fp)
//{
//	Person emp_out[SIZE];
//
//	if ((fp = fopen("emp.txt", "rb")) == NULL)
//	{
//		printf("cannot open file! \n");
//		return;
//	}
//
//	printf("%d employee's information read: \n", SIZE);
//
//	for (int i = 0; i<SIZE; i++)
//	{
//		if (fread(&emp_out[i], sizeof(Person), 1, fp) != 1){
//			if (feof(fp))
//			{
//				fclose(fp);
//				return;
//			}
//			printf("%-5s %4d %5d \n", emp_out[i].name, emp_out[i].age, emp_out[i].gender);
//		}
//	}
//	fclose(fp);
//}
//
//void main()
//{
//	FILE *fp = NULL;
//	Person employee[SIZE];
//
//	printf("Enter %d employee's information: \n", SIZE);
//	for (int i = 0; i<SIZE; i++)
//		scanf("%s %d %d", employee[i].name, &employee[i].age, &employee[i].gender);
//
//	write2file(employee);
//
//	read_from_file(fp);
//}

//int main(void)
//{
//	int c; // ע��:int����char��Ҫ����EOF 
//	FILE* fp = fopen("test.txt", "r"); 
//	if(!fp) {
//	perror("File opening failed");
//	return EXIT_FAILURE;
//}
////fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF 
//while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ�� 
//{
//putchar(c);
//}
//	//�ж���ʲôԭ������� 
//if (ferror(fp))
//	puts("I/O error when reading");
//else if (feof(fp))
//	puts("End of file reached successfully");
//	
//fclose(fp);
//}


enum { 
	SIZE = 5 
};

int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb"); // �����ö�����ģʽ 
	fwrite(a, sizeof(*a), SIZE, fp); // д double ������ 
	fclose(fp);
	fp = fopen("test.bin", "rb");
	// �� double ������
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1) {
		printf("%lf\n", b);
	}
	if (feof(fp))
		printf("Error reading test.bin: unexpected end of file\n");
	else if (ferror(fp)) {
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
}
