#include<stdio.h>

char* longest(char* p)
{
	char* t, max, n;
	while (*p == ' ')
	{
		p++;
	}//�����ʼ�ַ�ǰ��Ŀո�
	for (max = n = 0, t = p; *p; p++)//����max,n���Ƚ��ַ�����С��t����ŵ�ַ
	{
		if (*p != ' ')
		{
			n++;
		}//�����ո�֮��ľ��룬���õ�n�ĳ���
		else
		{
			if (max <= n)
			{
				max = n, t = p - n;
			}//��n��max���бȽϣ����Ҵ�Žϳ����ַ���ʼʱ��ĵ�ַ
			n = 0;//�ȽϹ�������n
		}
	}
	return max <= n ? p - n : t;//����ֵ�������һ���ַ�������'\0'������˵����һ���Ƚ�����
}
void main()
{
	char str[50], * p;
	gets(str);
	for (p = longest(str); *p && *p != ' '; printf("%c", *p++));//����forѭ������ַ����Ӧ���ַ�һһ���
	printf("\n");
}
