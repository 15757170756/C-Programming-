#include <stdio.h>
#include <math.h>

#define N 4

int charhex2dec(char chhex[]);

int main()
{	
	char chhex[] = "ab10c9";
	printf("字符型的十六进制数为：%s\n", chhex);
	int decNum = charhex2dec(chhex);
	printf("转化为十进制数：%d\n", decNum);

	return 0;
}

int charhex2dec(char* chhex)
{
	int sum = 0;
	int length = 0;
	char* temp = chhex;
	while (*temp != '\0') {
		length++;
		temp++;
	}
	
	while (*chhex != '\0' && length > 0) {
		if ((*chhex >= 'A' && *chhex <= 'F'))
			sum += (*chhex - '0' - 7) * pow(16, length - 1);

		else if (*chhex >= 'a' && *chhex <= 'f')
			sum += (*chhex - '0' - 39) * pow(16, length - 1);

		else
			sum += (*chhex - '0') * pow(16, length - 1);

		length--;
		chhex++;
	}

	return sum;
}


int hex2dec(char ch)
{
	switch (ch)
	{
	case 'A':
		return 10;
		break;
	case 'B':
		return 11;
		break;
	case 'C':
		return 12;
		break;
	case 'D':
		return 13;
		break;
	case 'E':
		return 14;
		break;
	case 'F':
		return 15;
		break;
	default:
		break;
	}
}


