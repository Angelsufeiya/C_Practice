#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define N 9 
//
//int x[N];
//int count = 0;
//
//void dump() {
//	int i = 0;
//	for (i = 0; i < N; i++) {
//		printf("%d", x[i]);
//	}
//	printf("\n");
//}
////��������
//void swap(int a, int b) {
//	int t = x[a];
//	x[a] = x[b];
//	x[b] = t;
//}
//
//void run(int n) {
//	int i;
//	if (N - 1 == n) {
//		dump();
//		count++; return;
//	}
//	for (i = n; i < N; i++) {
//		swap(n, i); 
//		run(n + 1); 
//		swap( n, i);
//	}
//}
//int main() {
//	int i;
//	for (i = 0; i < N; i++) {
//		x[i] = i + 1;
//	}
//	run(0);
//	printf("* Total: %d\n", count);
//}

//int main(){
//	int i = 3;
//	printf("%d %d", ++i, ++i);
//	return 0;
//}

int _main(){
	char name[20] = "Mary";
	FILE *out;
	out = fopen("output.txt", "w");
	if (out != NULL){
		fprintf(out, "Hello %s\n", name);
	}
	return 0;
}