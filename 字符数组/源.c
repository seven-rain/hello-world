#include<stdio.h>

char* longest(char* p)
{
	char* t, max, n;
	while (*p == ' ')
	{
		p++;
	}//跳过最开始字符前面的空格
	for (max = n = 0, t = p; *p; p++)//定义max,n来比较字符串大小，t来存放地址
	{
		if (*p != ' ')
		{
			n++;
		}//两个空格之间的距离，来得到n的长度
		else
		{
			if (max <= n)
			{
				max = n, t = p - n;
			}//将n和max进行比较，并且存放较长的字符开始时候的地址
			n = 0;//比较过后重置n
		}
	}
	return max <= n ? p - n : t;//返回值，因最后一个字符后面是'\0'，所以说加了一个比较条件
}
void main()
{
	char str[50], * p;
	gets(str);
	for (p = longest(str); *p && *p != ' '; printf("%c", *p++));//运用for循环将地址所对应的字符一一输出
	printf("\n");
}
