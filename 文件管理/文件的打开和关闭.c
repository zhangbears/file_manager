/*文件的打开和关闭*/
/*
2019年4月14日21:14:56
文件的打开有六个字符组成,r.w.a.t.b.+   分别表示为读,写,追加,text文本,二进制文件,读和写


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
		printf("打开失败\n");
		exit(1);
	}
	else
	{
		printf("打开成功\n");
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