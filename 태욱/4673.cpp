#include <iostream>

int N_size(int n) {
	int i = 1;
	int cnt = 0;
	while (true) {
		if ((n / i) == 0)
			return cnt;
		i *= 10;
		cnt++;
	}
}

bool isSelfNumber(int n) {
	int min = n - N_size(n) * 10 + 1;
	min = (min > 0) ? min : 0;//음수 처리

	for (int i = min; i < n; i++) {
		int result = i;// == n?
		int target = i;// 조사할 값
		int tenth = 1;//자릿수 추출 변수

		for (int j = N_size(n); j > 1; j--)
			tenth *= 10;//최대 자리수 만큼 10의 지수승 계산
		
		while (tenth >= 1) {
			result += (target / tenth);
			target = target % tenth;
			tenth /= 10;
		}//Self number 계산

		
		if (result == n)
			return false;
	}
	return true;
}

int main() {

	for (int i = 1; i <= 10000; i++)
		if (isSelfNumber(i))
			std::cout << i << '\n';
}