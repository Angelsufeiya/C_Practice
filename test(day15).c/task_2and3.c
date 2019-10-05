//模拟实现strcpy
//模拟实现strcat

char * strcpy(char *dst, const char * src){
	char * tmp = dst;
	while (*(dst++) = *(src++));//将*src = \0 赋值后跳出
	return tmp;
}

char * strcat(char *dst, const char * src){
	char * tmp = dst;
	while (*dst++);
	dst--;
	while (*(dst++) = *(src++));
	return tmp;
}