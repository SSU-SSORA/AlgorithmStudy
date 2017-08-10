#include <iostream>
#include <algorithm>
int main() {
	int ary[3];
	for (auto& a : ary)
		std::cin >> a;
	std::sort(ary, ary + 3);
	std::cout << ary[1] << std::endl;
}