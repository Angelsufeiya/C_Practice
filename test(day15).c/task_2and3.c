//ģ��ʵ��strcpy
//ģ��ʵ��strcat

char * strcpy(char *dst, const char * src){
	char * tmp = dst;
	while (*(dst++) = *(src++));//��*src = \0 ��ֵ������
	return tmp;
}

char * strcat(char *dst, const char * src){
	char * tmp = dst;
	while (*dst++);
	dst--;
	while (*(dst++) = *(src++));
	return tmp;
}