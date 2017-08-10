#include <iostream>

int main() {
	int cnt, lessThan;
	std::cin >> cnt >> lessThan;

	int temp;
	for (int i = 0; i < cnt; ++i) {
		std::cin >> temp;
		if (temp < lessThan)
			std::cout << temp << ' ';
	}
}