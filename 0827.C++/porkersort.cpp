#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
using namespace std;

//a
//b
//c
//d
//e


struct Poker{
	char type, point;

};

enum{
	spades,	//����
	hearts,	//����
	clubs,	//÷��
	diamonds,//��Ƭ
	joker,	//��С��
};

void input_poker(Poker * pk){
	char a, b;
	scanf("%d%d", pk->type, &pk->point);
	pk->type -= 'a';
	if (pk->type == joker){
		pk->point += 13;
	}
}

void output_poker(Poker k){
	char *type[5] = { "����", "÷��", "÷��", "��Ƭ", " " };
	char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "", "" };

	printf("%s%s\n", type[pk->type], point[pk->point]);
}

int main(){
	Poker p[5];
	
	int i;
	for (i = 0; i < 5; i++){
		input_poker;
	}

	while (1){
		input_poker(&p);
		while(getchar() != '\n');
		output_poker(p);
		puts("");
	}

	return 0;
}