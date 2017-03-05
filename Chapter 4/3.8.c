#include <stdio.h>

int main()
{
	int N;
	for (N = 1000; N <= 1112; ++N) {
		if (N == reverse(N * 9))
			printf("%d\n", N);
	}

	return 0;
}

int reverse(int n) {
	int n0, n1, n2, n3;
	n0 = n % 10;
	n1 = (n / 10) % 10;
	n2 = (n / 100) % 10;
	n3 = n / 1000;
	n = 1000 * n0 + 100 * n1 + 10 * n2 + n3;
	return n;
}

当然，这个求逆序数的方法比较笨，因为知道是4位数，可以这么写，但是如果位数不定呢。


#include <stdio.h>
#include <math.h>

int reverse2(int n);

int main()
{
	int N;
	for (N = 0; N <= 11112; ++N) {
		if (N == reverse2(N * 9))
			printf("%d\n", N);
	}

	return 0;
}

int reverse2(int n) {
	int cnt = 0, origin = n, sum = 0;
	while (n > 0) {
		n /= 10;
		++cnt;
	}
	for (int i = cnt - 1; i >= 0; --i) {
		sum += origin / (int)pow(10, i) * (int)pow(10, cnt - 1 - i);
		origin = origin % (int)pow(10, i);
	}

	return sum;
}

函数 reverse2可以输入任意正整数的逆序数，这样就不用担心是几位数了。

其实还可以用vector的，但是是C++的知识。
#include <iostream>
#include <vector>

int reverse3(int n);

int main()
{
	int N;
	for (N = 0; N <= 111112; ++N) {
		if (N == reverse3(N * 9))
			std::cout << N << std::endl;
	}

	return 0;
}

int reverse3(int n) {
	std::vector<int> arr;
	int sum = 0;
	while (n > 0) {
		arr.push_back(n % 10);
		n /= 10;
	}
	for (size_t i = 0; i < arr.size(); ++i) {
		sum += arr[i] * (int)pow(10, arr.size() - 1 - i);
	}

	return sum;
}
虽然这个能得出正确结果，但是代价是感觉慢了好多，要想进一步提升效率，就要看算法了。