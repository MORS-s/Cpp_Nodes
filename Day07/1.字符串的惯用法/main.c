#include <stdio.h>

int mian(void)
{
	//��ά�����ʾ�ַ�������
	//char planets[][8] = { "Mecury","Venus","Earth","Mars","Jupitor","Saturn",
	//						"Urans","Neptune","Pluto" };

	//�ַ�ָ�����飨�Ƽ�ʹ�ã�
	char* planets[] = { "Mecury","Venus","Earth","Mars","Jupitor","Saturn",
						"Urans","Neptune","Pluto" };


}

//size_t my_strlen(const char* s)
//{
//	size_t n;
//	for (int n = 0; *s != '\0'; s++)
//	{
//		n++;
//	}
//	return n;
//}

size_t my_strlen(const char* s)
{
	char* p = s;
	while (*p)
	{
		p++;
	}
	return p - s;
}

char* my_strcat(char* s1, const char* s2)
{
	char* p = s2;
	while (*p)
	{
		p++;
	}
	while (*p++ = *s2++)
		;

	return s1;
}