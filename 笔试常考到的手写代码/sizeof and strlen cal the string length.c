#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <string>

void fun(char a[])
{
	printf("char [] convert char*:%d\n", sizeof(a));
}

int main()
{
	//char ch[5] = "abcde";
	char ch1[] = "abcde";
	char ch2[6] = "abcde";
	char* ch3 = "abcde";
	std::string str1 = "abcde";
	std::string str2 = "abcdefgh";
	char ch4[10] = "abcde";
	char ch5[] = "";
	char ch6[] = "\0\0";
	char ch7[6] = "\0\0";

	printf("sizeof(ch1):%d\n", sizeof(ch1));
	printf("sizeof(ch2):%d\n", sizeof(ch2));
	printf("sizeof(ch3):%d\n", sizeof(ch3));
	printf("sizeof(str1):%d\n", sizeof(str1));
	printf("sizeof(str2):%d\n", sizeof(str2));
	printf("sizeof(ch4):%d\n", sizeof(ch4));
	printf("sizeof(ch5):%d\n", sizeof(ch5));
	printf("sizeof(ch6):%d\n", sizeof(ch6));
	printf("sizeof(ch7):%d\n", sizeof(ch7));

	printf("\n");

	printf("strlen(ch1):%d\n", strlen(ch1));
	printf("strlen(ch2):%d\n", strlen(ch2));
	printf("strlen(ch3):%d\n", strlen(ch3));
	printf("strlen(ch4):%d\n", strlen(ch4));
	printf("strlen(ch5):%d\n", strlen(ch5));
	printf("strlen(ch6):%d\n", strlen(ch6));
	printf("strlen(ch7):%d\n", strlen(ch7));
	fun(ch1);
	//printf("%d\n", strlen(str1));

	return 0;
}

输出
sizeof(ch1):6
sizeof(ch2):6
sizeof(ch3):4
sizeof(str1):28
sizeof(str2):28
sizeof(ch4):10
sizeof(ch5):1
sizeof(ch6):3
sizeof(ch7):6

strlen(ch1):5
strlen(ch2):5
strlen(ch3):5
strlen(ch4):5
strlen(ch5):0
strlen(ch6):0
strlen(ch7):0
char [] convert char*:4

sizeof是计算的对象的所拥有的空间大小，比如：char ch4[10] = "abcde";
ch4申请的是10个char型的大小，一个char是一个字节，所以是10；
而strlen计算是字符串中实际含有的字符，ch4含有'a'、'b'、'c'、'd'、'e'5个字符
所以是5.所以说空的字符串的strlen是0，但是sizeof是1，因为含有'\0'
C++中的string类型是类类型，和普通类型计算sizeof有些不一样，这种类类型的
sizeof是固定的，不会随着对象的变化而改变
