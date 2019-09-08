#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) sizeof(a)/sizeof(a[0])

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

int main1(){
	char murder[4] = { 'A', 'B', 'C', 'D' };
	char killer;
	int i = 0;

	for (i = 0; i < SIZE(murder); i++){
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer) +
			(murder[3] == killer) + (murder[3] != killer) == 3){
			printf("%c is killer\n", killer);
		}
	}

	system("pause");
	return 0;
}