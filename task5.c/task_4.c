#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define isSmallLetter(ch)(ch<= 'z' && ch >= 'a')
//"#define", 查找替换

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
		else if (isalnum(ch)){		//判断 ch 是不是数字
			//do nothing
		}
		else if (ch == '@'){	//输入 @ 结束
			break;
		}
		else{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}
