/*�ļ��Ĵ򿪺͹ر�*/
/*
2019��4��14��21:14:56
�ļ��Ĵ��������ַ����,r.w.a.t.b.+   �ֱ��ʾΪ��,д,׷��,text�ı�,�������ļ�,����д


*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	fp = NULL;
	fp = fopen("2.txt", "at+");
	char ch;
	char a;
	if (fp == NULL)
	{
		printf("��ʧ��\n");
		exit(1);
	}
	else
	{
		printf("�򿪳ɹ�\n");
		while ((ch = getchar()) != '\n')
		{
			fputc_s(ch, fp);
		}
	}
	while ((a = fgetc(fp)) != EOF)
		printf("%c\n", a);
	fclose(fp);
	return 0;
}