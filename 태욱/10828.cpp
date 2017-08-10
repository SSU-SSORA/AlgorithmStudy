#include <iostream>
#include <vector>
#include <string>
int main() {
	std::vector<int> vec;

	int count;
	std::cin >> count;

	std::string str;
	for (int i = 0; i < count; ++i) {
		std::cin >> str;
		if (str == "push") {
			int temp;
			std::cin >> temp;
			vec.push_back(temp);
		}
		else if (str == "size") {
			std::cout << vec.size() << '\n';
		}
		else if (str == "empty") {
			std::cout << vec.empty() << '\n';
		}
		else if (str == "top") {
			if (!vec.empty())
				std::cout << vec.back() << '\n';
			else
				std::cout << -1 << '\n';
		}
		else if (str == "pop") {
			if (!vec.empty()) {
				std::cout << vec.back() << '\n';
				vec.pop_back();
			}
			else std::cout << -1 << '\n';
		}
	}
}