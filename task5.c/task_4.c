#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define isSmallLetter(ch)(ch<= 'z' && ch >= 'a')
//"#define", �����滻

int isBigLetter(char ch){
	return ch <= 'Z' && ch >= 'A';
}

int main(){
	char ch;

	while (1){
		ch = getchar();
		if (isSmallLetter(ch)){
			putchar(ch - ('a' - 'A'));
		}
		else if (isBigLetter(ch)){
			putchar(ch + ('a' - 'A'));
		}
		else if (isalnum(ch)){		//�ж� ch �ǲ�������
			//do nothing
		}
		else if (ch == '@'){	//���� @ ����
			break;
		}
		else{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}
